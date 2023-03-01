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
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!#$%^&*()_+-=[]{};:,.<>?"

		srand(time(NULL));

	char password[PASSWORD_lenght + 1];
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	

	password[i] = charset[index];
	}

password[PASSWORD_LENGTH] = '\0';

printf("Your new password is: %s\n", password);

return (0);

}

