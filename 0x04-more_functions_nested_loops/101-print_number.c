#include "main.h"

/**
 * print_triangle - Prints an integer.
 * @size: The integer to be printed.
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}

		for (k = 1; k <= 1; k++)
		{
			_putchar('#');
		}
		
		_putchar('\n');
	}
}
