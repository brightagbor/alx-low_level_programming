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
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{

				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(",");
					putchar(" ");
				}
			}
		}
	}
	
	return 0;
}
