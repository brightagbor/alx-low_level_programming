#include "main.h"

/**
 * _pow_recursion - main function
 * @n: Integer variable
 * @start: Integer variable
 * @end: Integer variable
 * Description: The function returns the natural square root of a number
 *
 * Return: integer
 */
int _sqrt_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
