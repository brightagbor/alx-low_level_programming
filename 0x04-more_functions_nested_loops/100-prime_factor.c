#include <stdio.h>
#include <math.h>

/**
 * factor- Draws a straight line in the terminal
 * @num: The numbe rof time the character '_' should be printed
 * Return: prime
 */

unsigned long long factor(unsigned long long num)
{
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

	return prime;
}

/**
 * main - Entry point to the program
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long long number = 612852475143;
	unsigned long long fct = factor(number);

	printf("%llu\n", largest_prime);
	
	return (0);
}
