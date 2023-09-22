#include "main.h"

/**
 * _strcmp - main function
 * @s1: Pointer to char type
 * @s2: Char pointer
 *
 * Description: The function compares two strings
 *
 * Return: 0 or -1 or 1
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (-1);
	}
	else 
	{
		return (1);
	}
}
