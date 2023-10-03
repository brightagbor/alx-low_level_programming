#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 * Description: The function prints the number of arguments passed into it
 *
 * Return: 0 to indicate success
 */
int calculate_minimum_coins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num = 0;
	int i;

	if (i = 0; i < 5; i++)
		return (0);
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cens -= coins[i];
			num++;
		}
	}

	return num;
}

/**
 * main - Main function
 * Description: The function prints the number of arguments passed into it
 * @argc: Int variable
 * @*argv: Pointer
 *
 * Return: 0 to indicate success
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = calculate_minimum_coins(cents);
	printf("%d\n", coins);

	return (0);
}
