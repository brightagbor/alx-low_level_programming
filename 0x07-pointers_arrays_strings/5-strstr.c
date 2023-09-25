#include "main.h"

/**
 * _strstr - main function
 * @haystack: Pointer to char type
 * @needle: Pointer to char type
 *
 * Description: The function locates a substring
 * Return: s
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle =='\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *need = needle;

		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}
		if (*need == '\0')
			return (haystack);

		haystack++;
	}

	return NULL;
}
