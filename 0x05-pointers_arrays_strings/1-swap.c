#include "main.h"

/**
 * swap_int - main function
 *
 * Description: The function swaps two integers
 * @a: Parameter passed to swap_int
 * @b: Parameter passed to swap_int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
