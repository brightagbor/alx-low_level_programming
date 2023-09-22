#include "main.h"

/**
 * _reverse_array - main function
 * @a: Pointer to int type
 * @n: A variable n
 *
 * Description: The function reverses the content of an array of integers
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
