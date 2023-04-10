## 0x09-static_libraries 



ar, ranlib, nm and their usage
Create the static library libmy.a containing all the functions listed below:
	-The `main.h` file contains the following functions

		```c
		int _putchar(char c);
		int _islower(int c);
		int _isalpha(int c);
		int _abs(int n);
		int _isupper(int c);
		int _isdigit(int c);
		int _strlen(char *s);
		void _puts(char *s);
		char *_strcpy(char *dest, char *src);
		int _atoi(char *s);
		char *_strcat(char *dest, char *src);
		char *_strncat(char *dest, char *src, int n);
		char *_strncpy(char *dest, char *src, int n);
		int _strcmp(char *s1, char *s2);
		char *_memset(char *s, char b, unsigned int n);
		char *_memcpy(char *dest, char *src, unsigned int n);
		char *_strchr(char *s, char c);
		unsigned int _strspn(char *s, char *accept);
		char *_strpbrk(char *s, char *accept);
		char *_strstr(char *haystack, char *needle);
		```

	- Procedure in creating a static library.
		- Compile all `.c` files to get the object files `.o` files.
			`gcc -c *c`
		- Then create the static library from the object files.
			`ar rc libmy.a *.o`
		- Then we confirm if the static library was created successfully.
			`ar -t libmy.a`
		- We confirm if our object files were linked successfully.
			`nm libmy.a`
	- Compile the main code to test the static library this way: `gcc -std=gnu89 main.c -L. -lmy -o quote`
1. [Without libraries what have we? We have no past and no future](./create_static_lib.sh) : Create a script that creates a library called `liball.a` from all the `.c` files that are in the current directory.


##### Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
```sh
  gcc -c *.c #converts all .c files to .o (object) files
  ar rcs liball.a *.o
  ar rc liball.a *.o #This creates the static library "Libmy.a"
  ar -t liball.a #lists all files in liball.a
```
```sh
 $ gcc -std=gnu89 main.c -L -lmy -o <file_name>
```
