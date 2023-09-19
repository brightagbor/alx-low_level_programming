#include <stdio.h>
#include "main.h"

/**
 * print_array - main function
 *
 * Description: The function prints the number of elements of an array
 * @a: Pointer to integer type
 * @n: Pointer to integer type
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}
