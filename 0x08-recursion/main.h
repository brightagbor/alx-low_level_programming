#ifndef MAIN_H
#define MAIN_H

/**
 * Description: This is a header file which contains all
 * functions declarations in this task
 *
*/
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_helper(int n, int start, int end);
int _sqrt_recursion(int n);
int is_divisible(int n, int divisor);
int is_prime_number_helper(int n, int divisor);
int is_prime_number(int n);
int str_length(char *s);
int check_palindrome(char *start, char *end);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
#endif /* MAIN_H */
