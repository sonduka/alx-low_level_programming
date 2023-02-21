#include "main.h"

/**
 * print_alphabet - print lower case
 * Description - print lower case a-z
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;

	for (l = 'a'; l <= 'z'; l++){
	c = 'a';
	while (c < 'z'){
	_putchar(c);
	c++;
	}
	_putchar('\n');
	}
}
