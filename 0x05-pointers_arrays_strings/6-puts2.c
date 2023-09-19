#include "main.h"

/**
 * puts2 - main function
 *
 * Description: The function prints every other character of a 
 * string, fostarting with the first character llowed by a new line
 * @s: Pointer to char
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
