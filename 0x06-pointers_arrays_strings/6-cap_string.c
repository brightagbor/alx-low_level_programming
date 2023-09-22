#include "main.h"

/**
 * cap_string - main function
 *
 * Description: The function capitalizes all words of a string
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int cap = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == ',' || *str == ';' || *str == '.' ||
			*str == '!' || *str == '?' || *str == '"' ||
			*str == '(' || *str == ')' || *str == '{' ||
			*str == '}')
		{
			cap = 1;
		}
		else if (cap && ((*str >= 'a' && *str <= 'z') ||
			(*str >= 'A' && *str <= 'Z')))
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= ('a' - 'A');
			}
			cap = 0;
		}
		str++;
	}

	return (str);
}
