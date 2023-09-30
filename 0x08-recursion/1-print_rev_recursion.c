#include "main.h"

/**
 * _print_rev_recursion - main function
 * @s: Pointer to char type
 * Description: The function prints a string in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
