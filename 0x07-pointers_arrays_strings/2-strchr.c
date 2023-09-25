#include "main.h"

/**
 * _strchr - main function
 * @s: Pointer to char type
 * @c: Variable of type
 *
 * Description: The function locates a character in a string.
 * Return: s or s+ 1 depending on the case
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;

	if (*s == c)
		return (s);
	else
		return (s + 1);
}
