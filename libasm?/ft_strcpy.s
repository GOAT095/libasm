section .text
global _ft_strcpy

_ft_strcpy:
    xor rdx, rdx

nextchar:
    mov bl, BYTE[rsi+rdx]
    mov BYTE[rdi+rdx], bl
    add rdx, 1
    cmp BYTE[rsi+rdx], 0
    jne nextchar
    mov BYTE[rdi+rdx], 0
end:
    mov rax, rdi
    ret