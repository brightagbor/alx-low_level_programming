#include "main.h"

/**
 * print_triangle- Draws a straight line in the terminal
 * @n: The numbe rof time the character '_' should be printed
 *
 * Return: 0 (success)
 */

int main (void)
{
	unsigned long long num;
	unsigned long long prime = 2;

	while (num < 1)
	{
		if (num % prime == 0)
		{
			num /= prime;
		}
		else
		{
			prime++;
		}
	}
	
	printf("%llu\n", prime);
}

