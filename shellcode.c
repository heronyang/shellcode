/*
08048060 <_start>:
 8048060:       31 c0                   xor    %eax,%eax
 8048062:       b0 01                   mov    $0x1,%al
 8048064:       31 db                   xor    %ebx,%ebx
 8048066:       cd 80                   int    $0x80
*/

int main(void) {

    char shellcode[] = "\x31\xc0\xb0\x01\x31\xdb\xcd\x80";
    (*(void (*)()) shellcode)();

    return 0;
}
