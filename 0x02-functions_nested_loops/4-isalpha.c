#include "main.h"

/**
 * _isalpha - check for upper case
 * @c: the character to check
 * Description - print lower case a-z
 * Return: 0
 */

int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
        return (1);
        }
        else
        {
        return (0);
        }
}
