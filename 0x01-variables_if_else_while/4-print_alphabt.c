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
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	
	return (0);
}
