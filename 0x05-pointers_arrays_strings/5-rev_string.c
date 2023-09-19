#include "main.h"

/**
 * rev_string - main function
 *
 * Description: The function prints a string, followed by a new line
 * @s: Pointer to char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
