#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * Description - prints
 * @str: pointer to the string to be printed
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');

}
