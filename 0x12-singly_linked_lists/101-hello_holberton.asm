extern  printf ; call function printf

section .data

message: db "Hello, Holberton", 0 ; output massage
format: db "%s", 10,0 ; format to printf message

section .text;section code

global main

main:

push    rbp
mov     rdi,format
mov     rsi,message
mov     rax,0
call    printf
pop     rbp
mov     rax,0
ret
