#include "main.h"

/**
 * _abs - Main Function
 * @n: The variable to be checked
 *
 * Description: This function returns the abs of a number
 *
 * Return: -n(To make it positive) and n (if positive already)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}

	else
	{
		return (n);
	}
}
