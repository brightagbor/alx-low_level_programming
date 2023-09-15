#include <stdio.h>

/**
 * main - Entry Point
 * Description: The function prints characters based on 
 * the instructions
 *
 * Return: 0 (success)
 */

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
