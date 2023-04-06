#include "main.h"
/**
 * returns the length of a string.
 * @m: The string to be measured.
 *
 * Return: Always 0..
 */
int _strlen_recursion(char *m)
{
	int longit = 0;

	if (*m)
	{
		longit++;
		longit += _strlen_recursion(m + 1);
	}

	return (longit);
}
