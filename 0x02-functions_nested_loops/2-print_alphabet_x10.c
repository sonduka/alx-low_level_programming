#include "main.h"

/**
 * print_alphabet_x10 - print lower case
 * Description - print lower case a-z
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, j;
	for (i = 0; i <10; i++)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar('a' + j);
	}
	_putchar('\n');
	}
}
