#include "maze_solver.h"


static cNode_t nodes[xSize][ySize];
int currentPositionX=0,currentPositionY=0;
int nextPositionX=0,nextPositionY=0;
int initialPositionX=0, initialPositionY=0;
int rotation = 0;
int initialRotation=0;
//Prototypes for private functions
void maze_get_path(int startX, int startY, int endX, int endY);
int maze_resolve_direction(int nextX, int nextY, int currentX, int currentY);
//Initializer. Must be called to set-up the maze map
void maze_solver_init(void)
{
	int r;
	int c;
	for(r=0;r<ySize;r++){
		for(c=0;c<xSize;c++){
			nodes[r][c].NodeInfo.x=r;
			nodes[r][c].NodeInfo.y=c;
			nodes[r][c].NodeInfo.distance=-1;
			nodes[r][c].NodeInfo.Flags=15;
			nodes[r][c].previous.x=-1;
			nodes[r][c].previous.y=-1;
		}
	}
}

void maze_clear(void)
{
	int r;
		int c;
		for(r=0;r<ySize;r++){
			for(c=0;c<xSize;c++){
				nodes[r][c].NodeInfo.distance=-1;
				nodes[r][c].NodeInfo.Flags=15;
				nodes[r][c].previous.x=-1;
				nodes[r][c].previous.y=-1;
			}
		}
		currentPositionX=initialPositionX;
		currentPositionY=initialPositionY;
		rotation = initialRotation;

}

void maze_set_start_rotation(int inRotation)
{
	initialRotation=inRotation;
	rotation=inRotation;
}

void maze_set_start_point(int x, int y)
{
	initialPositionX=x;
	initialPositionY=y;
	currentPositionX=x;
	currentPositionY=y;
}

	//Flag inputs are raw data. Rotation and position are tracked within the Maze Module.
void maze_update_node(int Flags)
{
	//Uncomment this line if you don't want to refresh previously visited zones
	//if((nodes[currentPositionX][currentPositionY].NodeInfo.Flags&16)>>4<=0){

		int flipCount=rotation/90;
		if(flipCount==0)
			nodes[currentPositionX][currentPositionY].NodeInfo.Flags=Flags+(16);
		else if(flipCount==1)
			nodes[currentPositionX][currentPositionY].NodeInfo.Flags=((Flags&1)<<4-flipCount)|((Flags&15)>>flipCount)+(16);
		else if(flipCount==2)
			nodes[currentPositionX][currentPositionY].NodeInfo.Flags=((Flags&3)<<4-flipCount)|((Flags&15)>>flipCount)+(16);
		else if(flipCount==3)
			nodes[currentPositionX][currentPositionY].NodeInfo.Flags=((Flags&7)<<4-flipCount)|((Flags&15)>>flipCount)+(16);
	//}
}

//Returns 0-3 to indicate the mouse should go 0:Straight,1:Right,2:Backwards,3:Left
//Returns -1 if the mouse returns to the home position
int maze_next_direction_dfs(void)
{
	int Flags=nodes[currentPositionX][currentPositionY].NodeInfo.Flags;
	int choice=-1;

	//Check all neighbours to find a suitable route.
	if(currentPositionX-1>=0){
		if((Flags&1)==0&&(nodes[currentPositionX-1][currentPositionY].NodeInfo.Flags>>4&1)==0){
			choice=0;
		}
	}
	if(currentPositionY-1>=0){
		if((Flags>>1&1)==0&&(nodes[currentPositionX][currentPositionY-1].NodeInfo.Flags>>4&1)==0){
			choice=1;
		}
	}
	if(currentPositionX+1<16){
		if((Flags>>2&1)==0&&(nodes[currentPositionX+1][currentPositionY].NodeInfo.Flags>>4&1)==0){
			choice=2;
		}
	}
	if(currentPositionY+1<16){
		if((Flags>>3&1)==0&&(nodes[currentPositionX][currentPositionY+1].NodeInfo.Flags>>4&1)==0){
			choice=3;
		}
	}
	//Rewind
	//This assumes a dead end, must return the direction that was originally travelled. WRONG
	if(choice<0){
		nextPositionX=nodes[currentPositionX][currentPositionY].previous.x;
		nextPositionY=nodes[currentPositionX][currentPositionY].previous.y;
		//We have found the root node. Return -1 to signal the maze is complete.
		if(nextPositionX<0||nextPositionY<0)
			return -1;

	}
	//Resolve choice to nextPosition
	else{
		if(choice==0){
			nextPositionX=currentPositionX-1;
			nextPositionY=currentPositionY;
		}
		else if(choice==1){
			nextPositionX=currentPositionX;
			nextPositionY=currentPositionY-1;
		}
		else if(choice==2){
			nextPositionX=currentPositionX+1;
			nextPositionY=currentPositionY;
		}
		else if(choice==3){
			nextPositionX=currentPositionX;
			nextPositionY=currentPositionY+1;
		}
		nodes[nextPositionX][nextPositionY].previous.x=currentPositionX;
		nodes[nextPositionX][nextPositionY].previous.y=currentPositionY;
		//Link previous node to next node.

	}

	return maze_resolve_direction(nextPositionX,nextPositionY, currentPositionX, currentPositionY);
}

int shortestPath[xSize*ySize];
int * maze_dijkstras_algorithm(int startX, int startY,int endX, int endY){
	int r;
	int c;
	//Start all nodes at default values and remove visited flags
	for(r=0;r<ySize;r++){
		for(c=0;c<xSize;c++){
			nodes[r][c].NodeInfo.distance=xSize*ySize;
			nodes[r][c].NodeInfo.Flags-=16;
			nodes[r][c].previous.x=-1;
			nodes[r][c].previous.y=-1;
			shortestPath[r*xSize+c]=-1;
		}
	}

	//Initialize first node to 0 distance
	nodes[startX][startY].NodeInfo.distance=0;

	//Start at max number of nodes. Simply here for safety purposes
	int nodeSize=xSize*ySize;



	while(nodeSize>0){
		nodeSize--;

		cNode_t min;
		min.NodeInfo.x=0;
		min.NodeInfo.y=0;
		min.NodeInfo.distance=xSize*ySize;

		int r;
		int c;
		for(r=0;r<ySize;r++){
			for(c=0;c<xSize;c++){
				if((nodes[c][r].NodeInfo.distance<min.NodeInfo.distance)&&(nodes[c][r].NodeInfo.Flags>>4&1)==0){
					min=nodes[c][r];
				}
			}
		}

		//Set node as visited
		nodes[min.NodeInfo.x][min.NodeInfo.y].NodeInfo.Flags+=16;

		if(min.NodeInfo.x==endX&&min.NodeInfo.y==endY){
			maze_get_path(startX,startY,endX,endY);
			return shortestPath;
		}
		else if(min.NodeInfo.distance==xSize*ySize)
			return shortestPath;

		int alt=0;

		if(((min.NodeInfo.Flags>>3&1)==0)&&min.NodeInfo.y+1<15){
			alt = min.NodeInfo.distance + 1;
			if(alt < nodes[min.NodeInfo.x][min.NodeInfo.y+1].NodeInfo.distance)
			{
				nodes[min.NodeInfo.x][min.NodeInfo.y+1].NodeInfo.distance=alt;
				nodes[min.NodeInfo.x][min.NodeInfo.y+1].previous.x=min.NodeInfo.x;
				nodes[min.NodeInfo.x][min.NodeInfo.y+1].previous.y=min.NodeInfo.y;
			}
		}

		if(((min.NodeInfo.Flags>>2&1)==0)&&min.NodeInfo.x+1<15){
			alt = min.NodeInfo.distance + 1;
			if(alt < nodes[min.NodeInfo.x+1][min.NodeInfo.y].NodeInfo.distance)
			{
				nodes[min.NodeInfo.x+1][min.NodeInfo.y].NodeInfo.distance=alt;
				nodes[min.NodeInfo.x+1][min.NodeInfo.y].previous.x=min.NodeInfo.x;
				nodes[min.NodeInfo.x+1][min.NodeInfo.y].previous.y=min.NodeInfo.y;
			}
		}

		if(((min.NodeInfo.Flags>>1&1)==0)&&min.NodeInfo.y-1>=0){
			alt = min.NodeInfo.distance + 1;
			if(alt < nodes[min.NodeInfo.x][min.NodeInfo.y-1].NodeInfo.distance)
			{
				nodes[min.NodeInfo.x][min.NodeInfo.y-1].NodeInfo.distance=alt;
				nodes[min.NodeInfo.x][min.NodeInfo.y-1].previous.x=min.NodeInfo.x;
				nodes[min.NodeInfo.x][min.NodeInfo.y-1].previous.y=min.NodeInfo.y;
			}
		}

		if(((min.NodeInfo.Flags&1)==0)&&min.NodeInfo.x-1>=0){
			alt = min.NodeInfo.distance + 1;
			if(alt < nodes[min.NodeInfo.x-1][min.NodeInfo.y].NodeInfo.distance)
			{
				nodes[min.NodeInfo.x-1][min.NodeInfo.y].NodeInfo.distance=alt;
				nodes[min.NodeInfo.x-1][min.NodeInfo.y].previous.x=min.NodeInfo.x;
				nodes[min.NodeInfo.x-1][min.NodeInfo.y].previous.y=min.NodeInfo.y;
			}
		}

	}
	return shortestPath;
}

int maze_get_rotation(void)
{
	return rotation;
}

//This function returns the current x and y position of the micro-mouse.
void maze_get_position(int *X, int *Y)
{
	*X=currentPositionX;
	*Y=currentPositionY;
}

void maze_get_path(int startX, int startY, int endX, int endY)
{
	int index=nodes[endX][endY].NodeInfo.distance-1;
	int dir=0;
	int tempX=0;
	shortestPath[index]=-1;
	currentPositionX=endX;
	currentPositionY=endY;



	int Xdir=nodes[currentPositionX][currentPositionY].previous.x-currentPositionX;
	int Ydir=nodes[currentPositionX][currentPositionY].previous.y-currentPositionY;

	tempX=currentPositionX;

	currentPositionX=nodes[currentPositionX][currentPositionY].previous.x;
	currentPositionY=nodes[tempX][currentPositionY].previous.y;

	if(Ydir!=0)
		if(Ydir>0)
			dir=2;
	else
		dir=0;
	else if(Xdir!=0)
		if(Xdir>0)
			dir=3;
	else
		dir=1;

	//Resolve initial rotation
	rotation=90*dir;

	do{
		dir=maze_resolve_direction(nodes[currentPositionX][currentPositionY].previous.x,nodes[currentPositionX][currentPositionY].previous.y,currentPositionX,currentPositionY);
		rotation-=180;
		if(rotation<0)
			rotation+=360;

		dir-=2;
		if(dir<0)
			dir+=4;

		if(dir==1)
			dir=3;
		else if(dir==3)
			dir=1;


		shortestPath[index]=dir;
		index--;

	}while(nodes[currentPositionX][currentPositionY].previous.x>-1&&nodes[currentPositionX][currentPositionY].previous.y>-1);

	dir=(rotation-initialRotation)/90;
	if(dir<0)
		dir+=4;
	shortestPath[0]=dir;
}

//Update Rotation x is row, y is column
int maze_resolve_direction(int nextX, int nextY, int currentX, int currentY)
{
	int Xdir=nextX-currentX;
	int Ydir=nextY-currentY;
	int dir=0;

	if(Ydir!=0)
		if(Ydir>0)
			dir=0;
		else
			dir=2;
	else if(Xdir!=0)
		if(Xdir>0)
			dir=1;
		else
			dir=3;

	currentPositionX=nextX;
	currentPositionY=nextY;
	dir=dir-rotation/90;
	if(dir<0)
		dir=dir+4;

	rotation+=dir*90;
	if (rotation>=360)
		rotation-=360;

	return dir;
}
