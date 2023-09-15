#include "main.h"

/**
 * print_square - Draws a straight line in the terminal
 * @n: The numbe rof time the character '_' should be printed
 *
 * Return: void
 */

void print_triangle(int size);
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	for (int i = 0; i <= size; i++)
	{
		for (int j = size; j > i; j--)
		{
			_putchar(' ');
		}

		for (int k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
