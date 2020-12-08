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
	inc rax 		; rax+1 to null terminate the string
	push rdi		; had bach maydi3ch rdi kan saviwh f stack
	mov rdi, rax
	call _malloc	; allocation dyal rax size
	cmp rax, 0
	jz _error		; ila failat malloc
	pop rdi			; recuperation rdi
	push rsi		; hada 2nd param li ghadi ytcopa f rdi
	mov rsi, rdi
	mov rdi, rax
	call _ft_strcpy
	pop rsi			
	ret

_error:
	mov rax, -1
	ret