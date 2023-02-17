#include <stdio.h>

/**
 * main - Size is not grandeur, and territory does not make a nation
 * Description - Print the size of various types
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %d btye(s)\n", sizeof(char));
	printf("size of an int: %d btye(s)\n", sizeof(int));
	printf("size of a long int: %d btye(s)\n", sizeof(long int));
	printf("size of a long long int: %d btye(s)\n", sizeof(long long int));
	printf("size of a float: %zu  btye(s)\n", sizeof(float));
	return (0);
}
