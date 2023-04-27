section .data
    format db "Hello, Holberton", 0x0a, 0 ; null-terminated string with newline

section .text
    global main
    extern printf

main:
    ; push arguments for printf function onto the stack
    mov edi, format ; load format string address into EDI
    xor eax, eax    ; clear EAX register (return value)
    call printf     ; call printf function

    ; restore stack and exit
    mov eax, 0      ; set return value to 0
    ret             ; return from main

