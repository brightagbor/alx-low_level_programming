#include "main.h"

/**
 * print_rev - main function
 *
 * Description: The function prints a string, followed by a new line
 * @s: Pointer to char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
