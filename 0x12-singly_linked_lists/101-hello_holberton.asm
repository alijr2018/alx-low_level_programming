section .data
message:  db "Hello, Holberton", 0 ;message
result:  db "%s", ,10,0 ; format

    section .text ; code section
global main

extern printf ;call function printf 

main:
    push prompt
    call printf        
    
    mov     rdi,fmt
    mov     rsi,msg
    mov     rax,0
    pop     rbp             
    mov     rax,0
    ret