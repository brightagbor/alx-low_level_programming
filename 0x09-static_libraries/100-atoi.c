#include "main.h"

/**
 * _atoi - main function
 *
 * Description: The function printsthe second half of a string
 * @s: Pointer to char
 *
 * Return: void
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (2147483647 - digit) / 10)
		{
			return (sign == 1) ? 2147483647 : -2147483648;
		}

		result = result * 10 + digit;
		s++;
	}

	return (result * sign);
}
