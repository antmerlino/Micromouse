/*
 *  ======== empty.c ========
 */
/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>

/* Board Header file */
#include <system.h>

#include "drivers/motor.h"

/*
 *  ======== main ========
 */
Int main(Void)
{
	system_init();

	update_motor(LEFT_MOTOR, CW, 500);
	update_motor(RIGHT_MOTOR, CW, 500);

    System_printf("Starting the example\nSystem provider is set to SysMin. "
                  "Halt the target and use ROV to view output.\n");
    /* SysMin will only print to the console when you call flush or exit */
    System_flush();

    /* Start BIOS */
    BIOS_start();

    return (0);
}
