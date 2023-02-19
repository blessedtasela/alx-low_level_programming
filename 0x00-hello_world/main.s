	.file	"main.c"
	.intel_syntax noprefix
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 120
	.cfi_offset 3, -24
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR [rbp-24], rax
	xor	eax, eax
	lea	rax, [rbp-128]
	movabs	rdx, 7881706611452039202
	mov	QWORD PTR [rax], rdx
	movabs	rcx, 2338328219430578541
	mov	QWORD PTR [rax+8], rcx
	movabs	rsi, 7599087837537593708
	mov	QWORD PTR [rax+16], rsi
	movabs	rbx, 2333181710560748652
	mov	QWORD PTR [rax+24], rbx
	movabs	rdi, 7956009416907322733
	mov	QWORD PTR [rax+32], rdi
	movabs	rdx, 8824082329461945703
	mov	QWORD PTR [rax+40], rdx
	mov	DWORD PTR [rax+48], 6646906
	lea	rax, [rbp-128]
	mov	rdi, rax
	call	puts
	mov	eax, 0
	mov	rcx, QWORD PTR [rbp-24]
	xor	rcx, QWORD PTR fs:40
	je	.L3
	call	__stack_chk_fail
.L3:
	add	rsp, 120
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
