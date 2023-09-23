#include "main.h"

/**
 * rot13 - main function
 *
 * Description: The function encodes a string using rot13
 *
 * Return: type returned is char
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char base = ('\0');

		if (*ptr >= 'a' && *ptr <= 'z')
		{
			base = 'a';
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			base = 'A';
		}

		if (base != '\0')
		{
			*ptr = base + ((*ptr -base + 13) % 26);
		}
		ptr++;
	}

	return (str);
}
