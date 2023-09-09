#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	
	return 0;
}
