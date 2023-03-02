#include "main.h"

/**
 * *_strncpy - copies string 
 * Description - copy string1 to string 2
 * @src: character
 * @dest: character
 * @n: integer
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	while (*src != '\0' && n > 0)
	{
		*p++ = *src++;
		n--;
	}

	while (n > 0) 
	{
		*p++ = '\0';
		n--;
	}

	return (dest);
}
