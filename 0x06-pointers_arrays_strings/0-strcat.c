#include "main.h"

/**
 * _strcat - concatenate two strings
 * Description:  concatenate dest to src
 * @dest: character
 * @src: character
 * Return: 0
 *
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
