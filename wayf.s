	.file	"wayf.c"
	.text
	.def	fprintf;	.scl	3;	.type	32;	.endef
	.seh_proc	fprintf
fprintf:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	%r9, 40(%rbp)
	leaq	32(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rcx
	movq	24(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	movq	32(%rbp), %rax
	movq	%rbx, %r8
	movq	%rax, %rdx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "\12INVALID ARGUMENTS\12\0"
.LC1:
	.ascii "MEM ALLOCATION FAILED\12\0"
	.text
	.globl	factors
	.def	factors;	.scl	2;	.type	32;	.endef
	.seh_proc	factors
factors:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	cmpl	$1, 16(%rbp)
	jg	.L6
	movl	$2, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdx
	call	fprintf
	movl	$0, %eax
	jmp	.L7
.L6:
	movq	$0, -8(%rbp)
	movl	$1, -12(%rbp)
	movl	$1, -16(%rbp)
	jmp	.L8
.L11:
	movl	16(%rbp), %eax
	cltd
	idivl	-16(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L9
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	realloc
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L10
	movl	$2, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	call	fprintf
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	free
	movl	$0, %eax
	jmp	.L7
.L10:
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movl	-12(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movl	-16(%rbp), %edx
	movl	%edx, (%rax)
	addl	$1, -12(%rbp)
.L9:
	addl	$1, -16(%rbp)
.L8:
	movl	-16(%rbp), %eax
	cmpl	16(%rbp), %eax
	jle	.L11
	movq	-8(%rbp), %rax
.L7:
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC2:
	.ascii "\12ERROR IN PRINTING FACTORS\12\0"
.LC3:
	.ascii "%d\11\0"
.LC4:
	.ascii "%d\12\0"
	.text
	.globl	printfactors
	.def	printfactors;	.scl	2;	.type	32;	.endef
	.seh_proc	printfactors
printfactors:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, %ecx
	call	factors
	movq	%rax, -16(%rbp)
	movl	$0, -4(%rbp)
	cmpq	$0, -16(%rbp)
	jne	.L15
	movl	$2, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdx
	call	fprintf
	movq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	free
	jmp	.L12
.L16:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %edx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	printf
	addl	$1, -4(%rbp)
.L15:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, 16(%rbp)
	jne	.L16
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %edx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	free
	nop
.L12:
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC5:
	.ascii "Usage: %s <int1 int2 int3...> ... or -hcf <<int1> <int2>>.. or -nf <positive_integer>\12\0"
.LC6:
	.ascii "Example: %s 12 13 15 20\12\0"
.LC7:
	.ascii "Example: %s -hcf 12 18\12\0"
.LC8:
	.ascii "Example: %s -nf 12\12\0"
.LC9:
	.ascii "-hcf\0"
.LC10:
	.ascii "-gcd\0"
	.align 8
.LC11:
	.ascii "ERROR: -hcf requires two integers\12\0"
.LC12:
	.ascii "HCF: %d\12\0"
.LC13:
	.ascii "-nf\0"
.LC14:
	.ascii "ERROR: -nf reqiures 1 integer\0"
	.align 8
.LC15:
	.ascii "NUMBER OF FACTORS OF (%d): %d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	call	__main
	cmpl	$1, 16(%rbp)
	jg	.L18
	movq	24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdx
	leaq	.LC5(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movq	24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdx
	leaq	.LC6(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movq	24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdx
	leaq	.LC7(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movq	24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdx
	leaq	.LC8(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$1, %eax
	jmp	.L19
.L18:
	movl	$1, -4(%rbp)
	jmp	.L20
.L27:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	$45, %al
	jne	.L21
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	leaq	.LC9(%rip), %rdx
	movq	%rax, %rcx
	call	strcmp
	testl	%eax, %eax
	je	.L22
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	leaq	.LC10(%rip), %rdx
	movq	%rax, %rcx
	call	strcmp
	testl	%eax, %eax
	jne	.L21
.L22:
	movl	-4(%rbp), %eax
	addl	$2, %eax
	cmpl	%eax, 16(%rbp)
	jg	.L23
	movl	$2, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdx
	call	fprintf
	movl	$1, %eax
	jmp	.L19
.L23:
	movl	-4(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	atoi
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	cltq
	addq	$2, %rax
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	atoi
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%eax, %ecx
	call	hcf
	movl	%eax, -16(%rbp)
	cmpl	$-1, -16(%rbp)
	jne	.L24
	movl	$1, %eax
	jmp	.L19
.L24:
	movl	-16(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC12(%rip), %rax
	movq	%rax, %rcx
	call	printf
	addl	$3, -4(%rbp)
	jmp	.L20
.L21:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	$45, %al
	jne	.L25
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	leaq	.LC13(%rip), %rdx
	movq	%rax, %rcx
	call	strcmp
	testl	%eax, %eax
	jne	.L25
	movl	-4(%rbp), %eax
	addl	$1, %eax
	cmpl	%eax, 16(%rbp)
	jg	.L26
	movl	$2, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdx
	call	fprintf
	movl	$1, %eax
	jmp	.L19
.L26:
	movl	-4(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	atoi
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %ecx
	call	nofactors
	movl	%eax, %edx
	movl	-20(%rbp), %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC15(%rip), %rax
	movq	%rax, %rcx
	call	printf
	addl	$2, -4(%rbp)
	jmp	.L20
.L25:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	atoi
	movl	%eax, %ecx
	call	printfactors
	addl	$1, -4(%rbp)
.L20:
	movl	-4(%rbp), %eax
	cmpl	16(%rbp), %eax
	jl	.L27
	movl	$0, %eax
.L19:
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	nofactors
	.def	nofactors;	.scl	2;	.type	32;	.endef
	.seh_proc	nofactors
nofactors:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, %ecx
	call	factors
	movq	%rax, -16(%rbp)
	movl	$0, -4(%rbp)
.L31:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	cmpl	16(%rbp), %eax
	je	.L34
	addl	$1, -4(%rbp)
	jmp	.L31
.L34:
	nop
	movq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	free
	movl	-4(%rbp), %eax
	addl	$1, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	hcf
	.def	hcf;	.scl	2;	.type	32;	.endef
	.seh_proc	hcf
hcf:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	jmp	.L36
.L37:
	movl	24(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	16(%rbp), %eax
	cltd
	idivl	24(%rbp)
	movl	%edx, 24(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, 16(%rbp)
.L36:
	cmpl	$0, 24(%rbp)
	jne	.L37
	movl	16(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-Builds project) 14.1.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	realloc;	.scl	2;	.type	32;	.endef
	.def	free;	.scl	2;	.type	32;	.endef
	.def	strcmp;	.scl	2;	.type	32;	.endef
	.def	atoi;	.scl	2;	.type	32;	.endef
