#include "main.h"

/**
 * print_most_numbers - Main Function
 *
 * Description: This function print numbers excluding 2 & 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
		{
			_putchar(digit);
		}
	}

	_putchar('\n');
}
