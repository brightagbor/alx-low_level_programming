#include "main.h"

/**
 * print_sign - Main Function
 * @n: The variable to be checked
 *
 * Description: This function prints the sign
 *
 * Return: 1(if the numbe ris > 0), 0 (if = 0) and else -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
