#ifndef MAIN_H
#define MAIN_H

/**
 * Description: This is a header file which contains all
 * functions declarations in this task
 *
*/

int _putchar(char c);
void print_alphabet(void)
{
        char letter = 'a';

        while (letter <= 'z')
        {
                _putchar(letter);
                letter++;
        }

        _putchar('\n');
}
#endif /* MAIN_H */
