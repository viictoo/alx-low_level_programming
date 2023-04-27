section .data
hello: db "Hello, Holberton", 0Ah
format: db "%s"

section .text
global main

extern printf

main:
push rbx
lea rdi, [format]
lea rsi, [hello]
xor eax, eax
call printf
pop rbx
xor eax, eax
ret
