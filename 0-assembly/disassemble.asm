section .text
global main

main:
    mov ebp, esp; for correct debugging
    mov eax, 2
    mov [x], eax
    mov eax, 3
    mov [y], eax
    mov eax, [x]
    mov ebx, [y]
    add eax, ebx
    mov [z], eax
    mov eax, [z]
    ret


section .data
x       dw      0
y       dw      0
z       dw      0