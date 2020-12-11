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
    push rax        ; save errno f rax
    call ___error   ; rax now points to external variable errno
    pop r8          ; pop rax f r8 (r8 fih code d error)
    mov [rax], r8   ; poiti rax 3la r8 bach dereferenci rax
    mov rax, -1     ; return -1 (za3ma kayn error)
    ret