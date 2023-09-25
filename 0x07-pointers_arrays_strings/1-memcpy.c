#include "main.h"

/**
 * _memcpy - main function
 * @dest: Pointer to char type
 * @src: Pointer variable of type char
 * @n: Variable of type unsigned int
 *
 * Description: The function fills memory with a constant byte.
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original = dest;
	
	while (n--)
		*dest++ = *src++;

	return original;
}
