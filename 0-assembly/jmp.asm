section .text
global main

main:
    mov ebp, esp; for correct debugging
    mov eax, 1
    mov ebx, 4
    
    jmp new_road
    
    mov eax, 5
    
    ret

new_road:
    mov eax, 10
    cmp eax, 20
    
    jle litter_state
    sub eax, 10

litter_state:
    sub eax, 10
    jz mmm
    jmp ccc
ccc:
    add eax, 1
    ret
mmm:
    add eax, 100
    cmp eax, 100
    je abc
abc:
    sub eax, 15
    cmp eax, 0
    jbe ooo
    jae aaa
ooo:
    add eax, 300
    ret
aaa:
    sub eax,200
    ret
    
    

            