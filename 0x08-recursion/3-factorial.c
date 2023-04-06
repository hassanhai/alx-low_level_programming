#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @m: number to return the factorial 
 *
 * Return: factorial of m
 */
int factorial(int n)
{
	if (m < 0)
		return (-1);
	if (m == 0)
		return (1);
	return (m * factorial(m - 1));
}
