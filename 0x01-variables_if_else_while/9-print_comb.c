#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints alphabets
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{

		putchar('0' + i);
		
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	
	}
	putchar('\n');
	return (0);
}
