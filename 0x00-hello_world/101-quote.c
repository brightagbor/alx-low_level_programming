#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints a message.
 * It returns 0 to indicate successful execution.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message, 59);

	return (1);
}

