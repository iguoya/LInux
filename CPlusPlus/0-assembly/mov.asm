section .text
global main
main:
    mov ebp, esp; for correct debugging
    ;write your code here
;    mov eax, 123
;    mov ebx, 500
;    mov eax, [0x7fffe42b2f5c]
;    mov [0x5566], eax
;    mov [0x0699], eax
;    mov [0x0998], ebx
;    mov [0x1299], ecx
;    mov [0x1499], edx
;    mov [0x1999], esi
;    mov [sui_bian_xie], ebx
;    mov edx, [sui_bian_xie]
    
    mov eax, [number1]
    mov ecx, [number2]
    add eax, ecx
    
    mov [result], eax
    mov eax, [result]


    ret
    
section .data
;sui_bian_xie   dw    0
;number1 dw 5
;number2 dw 250
number1 dw 750
number2 dw 250
result  dw 0

;;;;;;;;;;10000(03e8);;;;;;;e8(232);;;;;;;;;;;;;;;;;