#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	
	return 0;
}
i