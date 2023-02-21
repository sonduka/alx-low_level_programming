#include "main.h"

/**
 * print_alphabet - print lower case
 * Description - print lower case a-z
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	_putchar(l);
	_putchar('\n');

	int i;
	for (i = 0; i <= 9; i++){
	print_alphabet_x10();
	
	}
}
