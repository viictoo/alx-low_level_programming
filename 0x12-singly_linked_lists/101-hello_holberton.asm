; Declare the main function as a global symbol 
;so that it can be called by the operating system when the program starts.
;global main

; Declare the printf function as an external symbol so that the 
;linker can resolve it to the appropriate library during the linking process.
;extern printf

; Beginning of the main function.
;main:
; Move the address of the hello string into the edi register.
;This register will be used as the first argument to the printf function,
	;which expects a pointer to a null-terminated string in the edi register.
	;mov edi, hello

	; Clear the eax register (which is used to hold the return value of the
			;printf function) by XORing it with itself. This sets all bits to zero.
	;xor eax, eax
	;Call the printf function, passing the address of the hello string as
	;the first argument. The return value of printf will be stored in the eax
	;register.
	;call printf

	; Set the return value of the main function to zero (which indicates success).
	;mov eax, 0
	; Return from the main function.
	;ret

	; Declare a null-terminated string that contains the message to be printed.
	;The \n character represents a newline. The ,0 terminates the string with
	;a null character.
	;hello: db 'Hello, Holberton\n', 0

	global    main
	extern    printf
	main:
	mov   edi, hello
	xor   eax, eax
	call  printf
	mov 	eax, 0
	ret
	hello: db `Hello, Holberton\n`,0
