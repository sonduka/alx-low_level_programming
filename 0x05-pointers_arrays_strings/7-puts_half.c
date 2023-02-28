#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints second half of a string
 * Description - program that prints half the length of a string
 * @str: A pointer to the string to be pointed
 * Return: 0
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int start;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else 
	{
		start = (len - 1) / 2;
	}

	for (int i = start; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

	

