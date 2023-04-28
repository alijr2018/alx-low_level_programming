section .data
fmt     db "%u  %s",10,0
msg1    db "Hello",0
msg2    db "Goodbye",0

    section .text
    extern printf
    global _start

_start:
    mov  edx, msg1
    mov  esi, 1
    mov  edi, fmt
    mov  eax, 0     ; no f.p. args
    call printf

    mov  edx, msg2
    mov  esi, 2
    mov  edi, fmt
    mov  eax, 0     ; no f.p. args
    call printf

    mov  ebx, 0     ; return value
    mov  eax, 1
    int  0x80
