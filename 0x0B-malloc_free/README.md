## 0x0B. C - malloc, free
### Resources
### Read or watch:

* 0x0a - malloc & free - quick overview.pdf
* Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)
#### man or help:

	- malloc
	- free
## Learning Objectives
	* At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
	- What is the difference between automatic and dynamic allocation
	- What is malloc and free and how to use them
	- Why and when use malloc
	- How to use valgrind to check for memory leak


### Requirements
General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
### Bash
* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your files should end with a new line (why?)
* The first line of all your files should be exactly #!/bin/bash
* A README.md file, at the root of the folder of the project, describing what each script is doing
* All your files must be executable
###  More Info
* You do not need to learn about dynamic libraries, yet.

## Tasks
* 0. Float like a butterfly, sting like a bee	- Write a function that creates an array of chars, and initializes it with a specific char.
							- Prototype: char *create_array(unsigned int size, char c);
							- Returns NULL if size = 0
							- Returns a pointer to the array, or NULL if it fails
* 1. The woman who has no imagination has no wings - Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

							- Prototype: char *_strdup(char *str);
							- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
							- Returns NULL if str = NULL
							- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
						    - FYI: The standard library provides a similar function: strdup. Run man strdup to learn more
