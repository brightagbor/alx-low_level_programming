#include "main.h"
/**
 * is_prime_helper- main function
 * @n: Integer varible
 * @divisor: Integer variable
 * Description: The function checks for divisibility
 *
 * Return: int value
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);
	if (n % divisor == 0 && divisor != n)
		return (1);

	return (is_divisible(n, divisor -1));
}

/**
 * is_prime_helper- main function
 * @n: Integer varible
 * @divisor: Integer variable
 * Description: The function that returns 1 if the input integer is
 * a prime number otherwise returns 0.
 *
 * Return: int value
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n < 2 || is_divisible(n, n - 1))
		return (0);

	return (is_prime_helper(n, divisor - 1));
}

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
	if (n < 2)
		return (0);

	return (is_prime_helper(n, n / 2));
}

