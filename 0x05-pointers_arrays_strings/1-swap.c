#include "main.h"

/**
 * swap_int - main function
 *
 * Description: The function swaps two integers
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
