#include "main.h"

/**
 * print_alphabet_x10 - Main Function
 *
 * Description: This function uses _putchar fun to print
 * letters of the alphabet using another defined function
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}
