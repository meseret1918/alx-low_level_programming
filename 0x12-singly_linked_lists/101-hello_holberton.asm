;File: 101-hello_holberton.asm
;Desc: 64-bit assembly program that prints
;Hello, Holberton followed by a new line

extern printf

section .text
global main	        ;must be declared for linker
main:			;tells linker entry point
mov rdx,len	;message length
mov rcx,msg	;message to write
mov rbx,1	;file descriptor (stdout)
mov rax,4	;system call number (sys_write)
int 0x80	;call kernel

mov rax,1	;system call number (sys_exit)
int 0x80	;call kernel

section	.data
msg db "Hello, Holberton", 0xa ;msg with newline character
len equ $ - msg	;length of string
