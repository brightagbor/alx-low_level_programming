#include "main.h"

/**
 * puts_half - main function
 *
 * Description: The function printsthe second half of a string
 * @str: Pointer to char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, length, start_position;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	start_position = (length + 1) / 2;
	for (i = start_position; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
