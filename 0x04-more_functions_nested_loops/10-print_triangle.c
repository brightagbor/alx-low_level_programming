#include "main.h"

/**
 * print_triangle- Draws a straight line in the terminal
 * @size: The numbe rof time the character '_' should be printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}

		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
