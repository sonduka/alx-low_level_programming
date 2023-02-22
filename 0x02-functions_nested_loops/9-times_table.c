#include "main.h"

/**
 * times_table - Entry Point
 * Description: Prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, ans;
	int i, j, ans, tens, unit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = i * j;
			tens = ans / 10;
			unit = ans % 10;
			if (j == 0)
			{
				_putchar('0');
@@ -31,8 +33,8 @@ void times_table(void)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ans / 10);
				_putchar(ans % 10);
				_putchar(tens / 10 + '0');
				_putchar(unit % 10 + '0');
			}
		}
		_putchar('\n');
	}
}



























