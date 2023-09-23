#include "main.h"

/**
 * rot13 - main function
 * @str: Pointer to char type
 *
 * Description: The function encodes a string using rot13
 *
 * Return: ptr++ of type is  returned
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
