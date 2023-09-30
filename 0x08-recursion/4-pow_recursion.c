#include "main.h"

/**
 * _pow_recursion - main function
 * @x: Integer variable
 * @y: Integer variable
 * Description: The function returns the value of x raised to teh power of y.
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
