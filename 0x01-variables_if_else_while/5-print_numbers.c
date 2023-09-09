#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints numbers from 0 to 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}

	return 0;
}
