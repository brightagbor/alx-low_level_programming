#include "main.h"

/**
 * _strpbrk - main function
 * @s: Pointer to char type
 * @accept: Pointer to char type
 *
 * Description: The function searches a string for any of a set of bytes.
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *pointer = accept;
		
		while (*pointer != '\0')
		{
			if (*s == *pointer)
				return (s);
			pointer++;
		}
		s++;
	}

	return ('\0');

}
