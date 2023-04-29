global main
extern printf

main:
mov edi format
mov rsi 'Hello, Holberton',0
mov rdi format
call printf
mov rax, 0
ret
