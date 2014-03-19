# invoke SourceDir generated makefile for micromouse.pem4f
micromouse.pem4f: .libraries,micromouse.pem4f
.libraries,micromouse.pem4f: package/cfg/micromouse_pem4f.xdl
	$(MAKE) -f F:\Projects\Micromouse\Software\micromouse/src/makefile.libs

clean::
	$(MAKE) -f F:\Projects\Micromouse\Software\micromouse/src/makefile.libs clean

