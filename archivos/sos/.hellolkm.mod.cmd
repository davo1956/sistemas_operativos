cmd_/home/natalia/sos/hellolkm.mod := printf '%s\n'   hellolkm.o | awk '!x[$$0]++ { print("/home/natalia/sos/"$$0) }' > /home/natalia/sos/hellolkm.mod
