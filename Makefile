exit:
	nasm -f elf exit.asm
	ld -m elf_i386 -o exit exit.o
	objdump -d ./exit

binsh:
	nasm -f elf binsh.asm
	ld -m elf_i386 -o binsh binsh.o
	objdump -d ./binsh

c:
	gcc -fno-stack-protector -z execstack -o shellcode shellcode.c
