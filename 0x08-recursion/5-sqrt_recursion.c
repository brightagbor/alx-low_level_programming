#include "main.h"

/**
 * _sqrt_helper - main function
 * @n: Integer variable
 * @start: Integer variable
 * @end: Integer variable
 * Description: The function returns square root helper
 *
 * Return: integer
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid = start + (end - start) / 2;
	long long square = (long long)mid * mid;

	if (start > end)
		return (-1);
	if (square == n)
		return (mid);
	else if (square < n)
		return (_sqrt_helper(n, mid + 1, end));
	else
		return (_sqrt_helper(n, start, mid - 1));

}

/**
 * _sqrt_recursion- main function
 * @n: Integer variable
 * Description: The function returns the square root of a number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	
	return (_sqrt_helper(n, 0, n));
}
