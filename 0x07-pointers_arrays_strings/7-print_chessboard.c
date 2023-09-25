#include "main.h"

/**
 * print_chessboard - main function
 * @a: Pointer to char type
 * 
 * Description: The function prints teh chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char current = a[i][j];
			
			_putchar(current);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
