section .data
	hello db "Hello, Holberton", 0
	format dq "%s", 0

section .text
	extern printf
	extern exit

	global main

main:
	push rbp
	mov rdi, format
	mov rsi, hello
	xor eax, eax
	call printf
	pop rbp

	xor edi, edi
	mov eax, 60
	syscall
