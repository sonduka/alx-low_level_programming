#include "main.h"

/**
 * _strlen - Returns the length of a string
 * Description - point to integer
 * @s: Pointer to the string
 *
 * Return: 0
 */

void int _strlen(char *s)
{
        int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

