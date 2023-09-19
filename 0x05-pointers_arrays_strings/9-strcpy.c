#include "main.h"

/**
 * *_strcpy - main function
 *
 * Description: The function prints the number of elements of an array
 * @dest: Pointer to char type
 * @ src: Pointer to char type
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (original_dest);
}
