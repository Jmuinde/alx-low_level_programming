section .data
print_Holb:		db "Hello, Holberton",10,0
ft:		db "%s",0

	    section .text
	    global main
	    extern printf

main:
	    push rbp
	    mov rbp, rsp

	    mov rsi, print_Holb
	    mov rdi, ft
	    call printf

	    pop rbp
	    mov rax, 0
	    ret
