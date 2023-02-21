#include "main.h"
/**
 * main - Entry point
 * Description - print lower case a-z
 * Return: 0
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z'){
	_putchar("%c",letter);
	letter++;
	}
	_putchar("\n");

}

int main(void)
{
	print_alpabet();
	return (0);
}
