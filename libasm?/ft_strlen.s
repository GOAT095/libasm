section .text
    global _ft_strlen

_ft_strlen:
    xor rax, rax

nextchar:
    add rax, 1
    cmp BYTE[rdi + rax], 0
    jne nextchar

end:
    ret