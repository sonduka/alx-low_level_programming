#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * Description: Prints half of a string
 * @a: Char
 * @n: char
 * Return: char
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
