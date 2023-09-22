#include "main.h"

/**
 * *_strncpy - main function
 * @dest: Pointer to char type
 * @src: Char pointer
 * @n: A variable of type int
 *
 * Description: The function copies on string into another
 *
 * Return: initial_Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	*dest = '\0';

	return dest;
