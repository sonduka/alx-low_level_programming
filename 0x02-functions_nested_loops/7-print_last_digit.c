#include "main.h"
/**
 * print_last_digit - prints signs
 * Description - print sign
 * @n:the character to check
 * Return: 0
 */

int print_last_digit(int n)
{
	int lst = n % 10;

	if (n < 0)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
