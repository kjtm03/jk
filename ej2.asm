.data
	espacio: .asciiz "\n"
	var1: .word 1
	var2: .word 1
	var3: .word 0
	var4: .word 5 #tamaño
	
.text

	#li $v0, 1
		
	lw $a0, var1
	add $t1, $a0, 0
	
	lw $a0, var2
	add $t2, $a0, 0
	
	lw $a0, var3
	add $t3, $a0, 0
	
	lw $a0, var4
	add $t4, $a0, 0
	
	#syscall
	#addi $t1,$zero,0
	
	add $t0,$zero,0 #i = 0

	while:
		bgt $t0,$t4, exit
		add $t0, $t0, 1 #i++
		#t3
		mul $t5, $t2, $t1
		add $t6, $t1, $t2
		add $t3, $t5, $t6
		#t2
		add $t2, $t1, $t2
		#t1
		add $t1, $zero, $t2
		#t2
		add $t2, $zero, $t3
		
		
		j while
		
	exit:
		jal imprimir
		li $v0, 10
		syscall
	
	imprimir:
		li $v0, 1
		add $a0, $t3,$zero
		syscall
				
		li $v0, 4	
		la $a0, espacio
		syscall
		
		jr $ra
