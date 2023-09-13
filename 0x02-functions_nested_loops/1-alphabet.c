#include "main.h"

/**
 * print_alphabet - The main function
 *
 * Description: This function uses _putchar function to print
 * letters of the alphabet
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
