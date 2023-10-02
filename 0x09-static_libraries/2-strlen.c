#include "main.h"

/**
 * _strlen- main function
 *
 * Description: The function returns the length of a string
 * @s: Pointer to char
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
