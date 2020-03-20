global main								;global label main

main:
	mov rax, 1							;first instruction write
	mov rdi, 1							;STDOUT_FILENO,
	mov rsi, usermsg					;msg to show "Hello, Holberton
	mov rdx, msglen						;size of msg
	
	syscall								;call kernel space
	mov rax, 60							;exit call
	mov rdi, 0							;exit done call
	syscall								;end call kernel space


section .data							;Data segment
	usermsg:db "Hello, Holberton", 10	;Msg to show in terminal
	msglen:	equ $ - usermsg				;legeth of Msg
