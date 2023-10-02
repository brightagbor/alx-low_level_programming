#include "main.h"

/**
 * _memset - main function
 * @s: Pointer to char type
 * @b: Variable of typpe char
 * @n: Variable of type unsigned int
 *
 * Description: The function fills memory with a constant byte.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);
}
