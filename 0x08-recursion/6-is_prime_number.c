#include "main.h"

/**
 * is_prime_number - main function
 * @n: Integer varible
 * Description: The function that returns 1 if the input integer is
 * a prime number otherwise returns 0.
 *
 * Return: int value
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}

