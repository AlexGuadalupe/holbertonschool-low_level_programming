#!/bin/bash
C-HELLO, WORLD!
20204-02-1iC-HELLO, WORLD!
20204-02-19

Before tasks:
	alex@alex-Guadalupe:~$ git clone git@github.com:hs-hq/Betty.git
	alex@alex-Guadalupe:~$ cd Betty
	alex@alex-Guadalupe:~/Betty$ sudo ./install.sh
	alex@alex-Guadalupe:~/Betty$ vi betty
	alex@alex-Guadalupe:~/Betty$ cat betty
	#!/bin/bash
	#!/bin/bash
	# Simply a wrapper script to keep you from having to use betty-style
	# and betty-doc separately on every item.
	# Originally by Tim Britton (@wintermanc3r), multiargument added by
	# Larry Madeo (@hillmonkey)

	BIN_PATH="/usr/local/bin"
	BETTY_STYLE="betty-style"
	BETTY_DOC="betty-doc"

	if [ "$#" = "0" ]; then
	    echo "No arguments passed."
	    exit 1
	fi

	for argument in "$@" ; do
	    echo -e "\n========== $argument =========="
	    ${BIN_PATH}/${BETTY_STYLE} "$argument"
	    ${BIN_PATH}/${BETTY_DOC} "$argument"
	done
	alex@alex-Guadalupe:~/Betty$ chmod a+x betty
	alex@alex-Guadalupe:~/Betty$ ls
	betty         betty.sh        install.sh  man        tests
	betty-doc.pl  betty-style.pl  LICENSE     README.md  test.sh
	alex@alex-Guadalupe:~/Betty$ sudo mv betty /bin/
	
REPOSITORY : holbertonschool-low_level_programming + Touch README.md
Directory : hello_world
	
	
TASKS :
#0. Preprocessor -Write a script that runs a C file through the preprocessor and save the result into another file.
    - The C file name will be saved in the variable $CFILE
    - The output should be saved in the file c
    	File: 0-preprocessor
	    	#!/bin/bash
	    	gcc -E $CIFEL -o c
    	
#1. Compiler -   Write a script that compiles a C file but does not link.
    - The C file name will be saved in the variable $CFILE
    - The output file should be named the same as the C file, but with the extension .o instead of .c.  Example: if the C file is main.c, the output file should be main.o
	File: 1-compiler
		#!/bin/bash
		gcc $CFILE -c

#2. Assembler - Write a script that generates the assembly code of a C code and save it in an output file.

    - The C file name will be saved in the variable $CFILE
    - The output file should be named the same as the C file, but with the extension .s instead of .c.
      Example: if the C file is main.c, the output file should be main.s
	File: 2-assembler
		#!/bin/bash
		ggc -S $CFILE

#3. Name - Write a script that compiles a C file and creates an executable named cisfun.
    - The C file name will be saved in the variable $CFILE
    	File: 3-name
    		#!/bin/bash
    		gcc $CFILE -o cisfun 

#4. Hello, puts - Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
    - Use the function puts
    - You are not allowed to use printf
    - Your program should end with the value 0
	File: 4-puts.c
		#include <stdio.h>

		/**
		 *  my first comment
		 *
		*/
		int main(void)
		{
		puts("\"Programming is like building a multilingual puzzle");
		return (0);
		}

#5. Hello, printf - Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
    - Use the function printf
    - You are not allowed to use the function puts
    - Your program should return 0
    - Your program should compile without warning when using the -Wall gcc option
	File: 5-printf.c
		#include <stdio.h>
		/**
		 * main- main
		 *
		 * Return: return value to 0
		*/
		int main(void)
		{
		printf("with proper grammar, but the outcome is a piece of art,\n");
		return (0);
		}

#6. Size is not grandeur, and territory does not make a nation - Write a C program that prints the size of various types on the computer it is compiled and run on.
    - You should produce the exact same output as in the example
    - Warnings are allowed
    - Your program should return 0
    - If you are using a linux on Vagrant you might have to install the package libc6-dev-i386 to test the -m32 gcc option (normally you dont need to do anything on your sandbox).
	File: 6-size.c
		#include<stdio.h>
		/**
		*main - Prints the size of various types on the computer
		*it is compiled and run on.
		*Return: 0
		*/
		int main(void)
		{
		printf("Size of a char: %d byte(s)\n", sizeof(char));
		printf("Size of an int: %d byte(s)\n", sizeof(int));
		printf("Size of a long int: %d byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
		printf("Size of a float: %d byte(s)\n", sizeof(float));
		return (0);

		}9
