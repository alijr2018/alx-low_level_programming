section .data
message:  db "Hello, Holberton", 0 ;message
result:  db "%s", ,10,0 ; format

    section .text ; code section
global main

extern printf ;call function printf 

main:
    push rbp
       
    
    mov     rdi,fmt
    mov     rsi,msg
    mov     rax,0
    call printf 
    pop     rbp             
    mov     rax,0
    ret