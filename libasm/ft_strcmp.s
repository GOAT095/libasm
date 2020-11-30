section .text
global _ft_strcmp

_ft_strcmp:
	xor rcx, rcx
	xor rbx, rbx
	xor rdx, rdx

nextchar:
	mov bl, [rdi + rcx]
	cmp bl,	0
	mov dl, [rsi + rcx]
	je return
	cmp dl, 0
	je return
	cmp bl, dl
	jne return
	inc rcx
	jmp nextchar

return:
	sub rbx, rdx
	mov rax, rbx
	ret