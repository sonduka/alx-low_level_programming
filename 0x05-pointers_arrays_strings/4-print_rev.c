#include "main.h"

/**
 * print_rev - Entry point
 * Description: Length of string
 * @s: pointer to the string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (int i = len -1; i >= 0; i--;)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
