## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4f linker.cmd package/cfg/micromouse_pem4f.oem4f

linker.cmd: package/cfg/micromouse_pem4f.xdl
	$(SED) 's"^\"\(package/cfg/micromouse_pem4fcfg.cmd\)\"$""\"F:/Projects/Micromouse/Software/micromouse/Release/configPkg/\1\""' package/cfg/micromouse_pem4f.xdl > $@
