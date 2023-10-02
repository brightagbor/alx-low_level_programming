#include "main.h"

/**
 * _isalpha - Main Function
 * @c: The variable to be checked
 *
 * Description: This function checks if a character is lower
 *
 * Return: 0(if not lower) and 1 (if lower)
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
