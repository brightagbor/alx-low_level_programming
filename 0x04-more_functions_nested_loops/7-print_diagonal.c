#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The numbe rof time the character '_' should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\v');
		}
	}
}
