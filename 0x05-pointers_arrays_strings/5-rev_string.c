#include "main.h"

/**
 * rev_string - Entry point
 * Description: Length of string
 * @s: Pointer to the string
 * Return: int
 */

void rev_string(char *s)
{
	int len, i;
	char tmp;

	if (s == NULL)
		return;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i -1) = tmp;
	}
}
