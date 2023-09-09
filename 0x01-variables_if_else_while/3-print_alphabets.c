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
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	return (0);
}
