#include "main.h"

/**
 * string_toupper - main function
 *
 * Description: The function changes lower strings to uppercase
 *
 * Return: void
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;

	}

	return (str);
}
