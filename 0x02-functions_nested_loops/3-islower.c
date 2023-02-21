#include "main.h"

/**
 * _islower - print lower case
 * @c: the character to check
 * Description - print lower case a-z
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
