#include "main.h"

/**
 * infinite_add - main function
 * @n1: Pointer to the first number
 * @n2: Pointer to second number
 * @r: Pointer of type char
 * @size_r: A variable of type int
 *
 * Description: The function adds two numbers
 *
 * Return: r + k (The first number + second number)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0;
	int len2 = 0;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	while (n2[len2] != '\0')
	{
		len2++;
	}

	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;

	while (i >= 0 || j >= 0)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
		}
		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j--;
		k--;

		if (k < 0)
		{
			return NULL;
		}
	}
	if (carry)
	{
		if (k < 0)
		{
			return NULL;
		}
		r[k] = carry + '0';
	}

	return (r + k);
}
