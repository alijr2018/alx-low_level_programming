section .bss ;variable
section .data ;cons
h : db "Hello, Holberton", 17 ; string to print
hl: equ $-h
section .text
global _start

_start
mov rax,1 ; sys_write
mov rdi,1 ; stdout
mov rsi,h ;message to write
mov rdx,hl ;message length
syscall ;call karnel

;end program

mov rax,60 ; sys_exit
mov rdi,0 ;error code 0 (success)
syscall
