#include "main.h"

/**
 * print_alphabet - print lower case
 * Description - print lower case a-z
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++){
	c = 'a';
	while (c < 'z'){
	_putchar(c);
	c++;
	}
	_putchar('\n');
	}
}
