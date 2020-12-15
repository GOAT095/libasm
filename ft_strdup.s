section.text:
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy
	extern ___error

_ft_strdup:
	cmp rdi, 0		; ila parametre ja khawi
	jz _error
	call _ft_strlen
	inc rax
	push rdi
	mov rdi, rax
	call _malloc	; allocation dyal rax size
	cmp rax, 0
	je _error		; ila failat malloc
	pop rdi			; recuperation rdi
	mov rsi, rdi
	mov rdi, rax
	call _ft_strcpy
	ret

_error:
	call ___error
	mov [rax], BYTE 12	; rax ayakhod adress dyal rdi li fih code d error 12 (dyal malloc)
	mov rax, 0			; return NULL
	ret