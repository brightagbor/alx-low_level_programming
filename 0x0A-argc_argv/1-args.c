#include <stdio.h>

/**
 * main - Main function
 * Description: The function prints the number of arguments passed into it
 *
 * Return: The return value is int.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	
	printf("Number of arguments: %d\n", argc - 1);
	return 0;
}
