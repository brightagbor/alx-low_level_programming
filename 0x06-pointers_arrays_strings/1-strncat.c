#include "main.h"

/**
 * *_strncat - main function
 * @dest: Pointer to char type
 * @src: Char pointer
 * @n: A variable of type int
 *
 * Description: The function concatenate two strings
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end_of_dest = dest;

	while (*end_of_dest != '\0')
	{
		end_of_dest++;
	}
	while (*src != '\0' && n < 0)
	{
		*end_of_dest = *src;
		end_of_dest++;
		src++;
		n--;
	}
	*end_of_dest = '\0';

	return (dest);
}
