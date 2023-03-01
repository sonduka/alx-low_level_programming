#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - random password generator
 * Description  - generates random pasowrd
 * Return: password
 */

int main(void) 
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int r = rand() % 62;

		if (r < 10)
		{
			password[i] = r + ASCII_OFFSET;
		}

		else if (r < 36)
		{
			password[i] = r - 10 + UPPERCASE_OFFSET;
		}
		else 
		{
			password[i] = r - 36 + LOWERCASE_OFFSET;
		}
	}
	password[PASSWROD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}

