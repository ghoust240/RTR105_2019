	.file	"operation_logical_AND_and_bitwise_AND.c"
	.text
	.section	.rodata
.LC0:
	.string	"oper\304\201cija &: %d\n"
	.align 8
.LC1:
	.string	"oper\304\201cijas & rezult\304\201ta izm\304\223rs baitos %ld\n"
.LC2:
	.string	"oper\304\201cija &&: %d\n"
	.align 8
.LC3:
	.string	"oper\304\201cijas && rezult\304\201ta izm\304\223rs baitos %ld\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$100, -8(%rbp)
	movl	$50, -4(%rbp)
	movl	-8(%rbp), %eax
	andl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$4, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	cmpl	$0, -8(%rbp)
	je	.L2
	cmpl	$0, -4(%rbp)
	je	.L2
	movl	$1, %eax
	jmp	.L3
.L2:
	movl	$0, %eax
.L3:
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$4, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
