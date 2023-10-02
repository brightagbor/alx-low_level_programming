#include "main.h"

/**
 * str_length - main function
 * @s: Pointer to char type
 * Description: The function returns the length of a string
 *
 * Return: int value
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_length(s + 1));
}

/**
 * check_palindrome - main function
 * @start: Pointer to char type
 * @end: Pointer to char type
 * Description: The function returns the length of a string
 *
 * Return: int value
 */
int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
		return (0);

	return (check_palindrome(start + 1, end - 1));
}
/**
 * is_palindrome - main function
 * @s: Pointer to char type
 * Description: The function returns 1 if a string is a palindrome and 0 if not
 *
 * Return: int value
 */
int is_palindrome(char *s)
{
	int length = str_length(s);

	if (length == 0)
		return (1);

	return (check_palindrome(s, s + length - 1));
}
