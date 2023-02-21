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
	printf("%c",letter);
	letter++;
	}
	printf("\n");

}

int main(void)
{
	print_alpabet();
	return (0);
}
