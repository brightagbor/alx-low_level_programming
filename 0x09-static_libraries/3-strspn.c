#include "main.h"

/**
 * _strspn - main function
 * @s: Pointer to char type
 * @accept: Pointer to char type
 * 
 * Description: The function fills memory with a constant byte.
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count =0;

	while (*s != '\0')
	{
		char *pointer = accept;

		while (*pointer != '\0' && *s != *pointer)
			pointer++;
		if (*pointer == '\0')
			break;
		count++;
		s++;
	}

	return (count);
}

