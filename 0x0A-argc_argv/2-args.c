#include <stdio.h>

/**
 * main - Main function
 * Description: The function prints all arguments it receives
 *
 * Return: The return value is int.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < args; i++)
		printf("%s\n", argv[i]);

	return (0);
}
