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
	int tens1, ones1, tens2, ones2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		for (ones1 = 0; ones1 <= 9; ones1++)
		{
			for (tens2 = tens1; tens2 <= 9; tens2++)
				for (ones2 = ones1 +1; ones2 <= 9; ones2++)
				{
					putchar('0' + tens1);
					putchar('0' + ones1);
					putchar(' ');
					putchar('0' + tens2);
					putchar('0' + ones2);
					putchar(',');
					putchar(' ');
				}
		}
	}

	return (0);
}
