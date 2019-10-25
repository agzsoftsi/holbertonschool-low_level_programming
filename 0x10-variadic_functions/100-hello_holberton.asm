	          global    main

	          section   .text
main:	          mov       rax, 1	 ; system call for write
	          mov       rdi, 1       ; file handle 1 is stdout
	          mov       rsi, message ; address of string to output
	          mov       rdx, 17	 ; number of bytes
	          syscall		 ; invoke operating system to do the write
	          mov       rax, 60	 ; system call for exit
	          xor       rdi, rdi	 ; exit code 0
	          syscall		 ; invoke operating system to exit

	          section   .data
message:	  db        "Hello, Holberton", 10 ; note the newline at the end
