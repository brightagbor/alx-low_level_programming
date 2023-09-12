#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: This function uses _putchar fun to
 * print letters of the alphabet using another defined 
 * function
 * It returns 0 on sucess
 *
 * Return: 0 (success)
*/

int _putchar(char c)
{
	return write(1, &c, 1);
}

void print_alphabet(void)
{
	for (int i = 0; i < 10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}

int main(void)
{
	print_alphabet();

	return (0);
}
