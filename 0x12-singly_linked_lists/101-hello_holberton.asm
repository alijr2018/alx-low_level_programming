
section .data
prompt  db 'Name: ', 0          ;; char prompt[] = "Name: ";
result  db 'Hello, %s!', 0      ;; char result[] = "Hello, %s!";

    section .bss
name    resb 1024       ;; char name[24];

    section .text
global _main
extern _printf, _gets
_main:
    push prompt
    call _printf        ;; printf(prompt);
    add esp, 4

    push name
    call _gets          ;; gets(name);
    add esp, 4

    push name
    push result
    call _printf        ;; printf(result, name);
    add esp, 8

    xor eax, eax        ;; 0 for a return value
    ret
