section .text
global main
section .data
message db "Hello, holberton",0xa
len equ $ - message
section .text
main:
	mov edx,len
	mov ecx,message
	mov ebx,1
	mov eax,4
	int 0x80

	mov ebx,0
	mov eax,1 
	int 0x80
