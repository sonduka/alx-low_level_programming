#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * Description - converts a string to an integer
 * @s: the string to convert to an integer
 * Return: the converted string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
		s++;

	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;

		s++;
	}

	while (*s >= '0' &&  *s <= '9')
	{
		int digit = *s - '0';

		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
			result (sign == 1 ? INT_MAX : INT_MIN);

		result = result * 10 + digit;
		s++;
	}

	return (result * sign);
}
	
