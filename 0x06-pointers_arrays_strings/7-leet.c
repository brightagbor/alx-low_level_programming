#include "main.h"

/**
 * let - main function
 * @str: Pointer to char
 *
 * Description: The function that encodes a string into 1337
 *
 * Return: char
 */
char *leet(char *str)
{
	char leet_map[128] = {0};
	char *ptr = str;

	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	while (*ptr != '\0')
	{
		if (leet_map[*ptr])
		{
			*ptr = leet_map[*ptr];
		}
		ptr++;
	}

	return str;
}
