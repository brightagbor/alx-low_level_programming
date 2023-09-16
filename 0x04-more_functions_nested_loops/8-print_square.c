#include "main.h"

/**
 * print_square - Draws a straight line in the terminal
 * @size: The numbe rof time the character '_' should be printed
 *
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
