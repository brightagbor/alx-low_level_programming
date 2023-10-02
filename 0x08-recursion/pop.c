#include "main.h"

/**
 * is_palindrome - main function
 * @s: Pointer to char type
 * Description: The function returns 1 if a string is a palindrome and 0 if not
 *
 * Return: int value
 */
int is_palindrome(char *s)
{
	int length = 0;
	int i, j;

	while (s[length] != '\0')
		length++;
	if (length == 0)
		return (1);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}

	return (1);
}
