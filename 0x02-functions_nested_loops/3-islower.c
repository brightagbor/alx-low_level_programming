#include "main.h"

/**
 * _islower - Main Function
 * c: The character to check
 *
 * Description: This function checks if a character is lower
 *
 * Return: 0(if not lower) and 1 (if lower)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
