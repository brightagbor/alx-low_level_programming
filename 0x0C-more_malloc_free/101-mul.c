#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
	int result = atoi(num1) * atoi(num2);
	printf("%d\n", result);
}

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		char *ptr;

		ptr = argv[i];		
		while (*ptr)
		{
			if (*ptr < '0' || *ptr > '9')
			{
				printf("Error\n");
				return (98);
			}
			ptr++;
		}
	}
	multiply(argv[1], argv[2]);
	
	return (0);
}

