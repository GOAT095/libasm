
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
    call ___error   ; rax now points to external variable errno
    pop r8          ; pop rax f r8 (r8 fih code d error)
    mov [rax], r8   ; poiti rax 3la r8 bach dereferenci rax
    mov rax, -1     ; return -1 (za3ma kayn error)
    ret