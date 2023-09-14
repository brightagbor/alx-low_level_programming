#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * Description: This is a header file which contains all
 * functions declarations in this task
 *
*/

int positive_or_negative(int i);

/**
 * largest_number - Finds the largest among three integers.
 * @a: The first integer.
 * @b: The second integer.
 * @c: The third integer.
 *
 * Return: The largest of the three integers.
 */

int largest_number(int a, int b, int c);

int convert_day(int month, int day);

void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
