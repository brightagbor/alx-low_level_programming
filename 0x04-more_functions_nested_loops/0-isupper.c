#include "main.h"

/**
 * _isupper - Main Function
 * @c: The character to check
 *
 * Description: This function checks if a character is upper
 *
 * Return: 0(if not lower) and 1 (if lower)
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
