#include "main.h"

/**
 * _puts - Takes a pointer to an int as parameter
 * Description - point to integer
 * @str: the string to print
 *
 * Return: 0
 */

void _puts(char *str);
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}

