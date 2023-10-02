#include "main.h"

/**
 * factorial - main function
 * @n: Integer variable
 * Description: The function prints the factorial of a number
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
