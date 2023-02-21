julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
julien@ubuntu:~/0x02$ ./0-putchar 
_putchar
julien@ubuntu:~/0x02$

#include <stdio.h>

/**
* _putchar - writes the character c to standard output
* @c: The character to print
*
* Return: on success
* on error
*/

int _putchar(char c)
{
	return putchar(c);
}

int main(){
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return 0;
}
