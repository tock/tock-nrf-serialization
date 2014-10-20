    

mkbin:
	arm-none-eabi-objcopy -O binary "main.exe" "main.bin"
    
prog: mkbin
	JLinkExe prog.jlink || true

	
