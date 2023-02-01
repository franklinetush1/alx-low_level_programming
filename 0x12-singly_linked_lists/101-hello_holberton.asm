section .text
global _start
_start:
mov     edx, len    ;message length
mov     ecx, msg    ;message to write
mov     ebx, 1      ;file descriptor
mov     eax, 4      ;system call number
int     0x80        ;call kernel
mov     eax, 1      ;system call number
int     0x80        ;call kernel

section .data

msg     db      'Hello, Holberton',0xa  ;string
len     equ     $ - msg                 ;length of string

section .newline
mov ah, 02h
mov dl, 13
int 21h
mov dl, 10
int 21h
ret
