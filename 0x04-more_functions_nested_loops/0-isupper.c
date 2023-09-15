#include "main.h"

/**
 * _isupper - This is the main function
 * @c: The character to check
 *
 * Description: This function checks if a character is upper
 *
 * Return: 1 if 'c' is an uppercase letter, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
