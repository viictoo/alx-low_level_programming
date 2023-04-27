section .data
hello db 'Hello, Holberton',10 ; 10 is the ASCII code for newline

section .text
global _start

_start:
; write the string to stdout
mov rax, 1 ; system call for write
mov rdi, 1 ; stdout file descriptor
mov rsi, hello ; address of string
mov rdx, 17 ; string length
syscall ; call kernel to write string to stdout

; exit
mov rax, 60 ; system call for exit
xor rdi, rdi ; exit status
syscall ; call kernel to exit program

