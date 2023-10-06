#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: int Variable
 * @av: Pointer to pointer of type char
 *
 * Return: char type
 */
char *argstostr(int ac, char **av)
{
	int total_length, i, current_position;
	char *concatenated_str;
	
	if (ac == 0 || av == NULL)
		return (NULL);
	total_length = 0;
	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;
	concatenated_str = (char *)malloc((total_length + 1) * sizeof(char));
	if (concatenated_str == NULL)
		return (NULL);
	current_position = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(concatenated_str + current_position, av[i]);
		current_position += strlen(av[i]);
		concatenated_str[current_position++] = '\n';
	}
	concatenated_str[total_length] = '\0';
	return (concatenated_str);
}

