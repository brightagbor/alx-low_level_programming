#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: This function uses _putchar function to print
 * putchar to teh standard output.
 * It returns 0 on sucess
 *
 * Return: 0 (success)
*/

int _putchar(char c)
{
	return write(1, &c, 1);
}

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
