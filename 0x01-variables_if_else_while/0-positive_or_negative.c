#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: This is the main function that prints
 * a message best on the value of n.
 * It returns 0 to indicate success.
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%dis positive", n);
	}

	else if (n < 0)
	{

		printf("%dis negative", n);
	}
	else
	{
		printf("%dis zero", n);
	}
	return (0);
}
