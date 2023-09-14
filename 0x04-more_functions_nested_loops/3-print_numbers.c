#include "main.h"

/**
 * print_numbers - Main Function
 *
 * Description: This function print numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}

	_putchar('\n');
}
