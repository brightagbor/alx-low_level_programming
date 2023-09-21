#include "main.h"

/**
 * *_strcat - main function
 * @dest: Pointer to char type
 * @src: Char pointer
 *
 * Description: The function concatenate two strings
 *
 * Return: dest
 */

 char *_strcat(char *dest, char *src)
{
	char *end_of_dest = dest;

	while (*end_of_dest != '\0')
	{
		end_of_dest++;
	}
	while (*src != '\0')
	{
		*end_of_dest = *src;
		end_of_dest++;
		src++;
	}
	*end_of_dest = '\0';

	return (dest);
}
