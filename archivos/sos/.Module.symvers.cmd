cmd_/home/natalia/sos/Module.symvers :=  sed 's/ko$$/o/'  /home/natalia/sos/modules.order | scripts/mod/modpost      -o /home/natalia/sos/Module.symvers -e -i Module.symvers -T - 
