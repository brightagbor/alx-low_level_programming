#include "main.h"

/**
 * *_strcat - main function
 * @dest: Pointer to char type
 * @src: Char pointer
 *
 * Description: The function concatenate two strings
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);
}
