#include "main.h"

/**
 * swap_int - Takes a pointer to an int as parameter
 * Description - point to integer
 * @a: Pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
        int temp = *a;
	*a = *b;
	*b = temp;
}

