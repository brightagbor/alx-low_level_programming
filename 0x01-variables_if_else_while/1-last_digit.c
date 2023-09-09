#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: This is the main funcion that 
 * displays a message and numbers.
 * It returns 0 to indicate success.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10
	
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	
	else
	{
		printf("The last digit of %d is %d and is 0\n", n, lastDigit);


	return (0);
}
