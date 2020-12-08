
section .text
    global _ft_write
    extern ___error
_ft_write:
    mov rax, 0x2000004
    syscall
    jc error
    ret

error:
    push rax        ; save errno f rax
    call ___error   ; rax is now points to external variable errno.
    pop r8          ; pop rax f r8
    mov [rax], r8   ; poiti rax 3la r8
    mov rax, -1     ; return -1 (za3ma kayn error)
    ret