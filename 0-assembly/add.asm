section .text
global main
main:
    mov ebp, esp; for correct debugging
    mov eax, 1
    mov ebx, 2
    add eax, ebx
    
    mov eax, 1
    mov ebx, 2
    mov ecx, 3
    mov edx, 4
    
    add eax, ebx
    add eax, ecx
    add eax, edx
    
    sub eax, 1
    sub eax, ecx
    
    ;write your code here
    ret