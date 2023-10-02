#include "main.h"

/**
 * _isdigit - Main Function
 * @c: The character to check
 *
 * Description: This function checks if a character is digit
 *
 * Return: 0(if not digit) and 1 (if it is a digit)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
