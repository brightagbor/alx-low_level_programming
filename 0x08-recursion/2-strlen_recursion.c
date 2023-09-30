#include "main.h"

/**
 * _strlen_recursion - main function
 * @s: Pointer to char type
 * Description: The function prints the length of a string
 *
 * Return: int value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
