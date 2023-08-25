section .data
    msg db "Hello, Holberton", 0xA ; Define the string and include a newline character
    msglength equ $ - msg ; Calculate the length of the string

section .text
global _start

_start:
    ; Write syscall (syscall number 1)
    mov rax, 0x1     ; syscall number 1 (write)
    mov rdi, 0x1     ; file descriptor 1 (stdout)
    mov rsi, msg     ; pointer to the string
    mov rdx, msglength ; length of the string
    syscall

    ; Exit syscall (syscall number 60)
    mov rax, 0x3C    ; syscall number 60 (exit)
    xor rdi, rdi     ; status code 0
    syscall

