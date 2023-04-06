#include "main.h"

/**
 * prints a string in reverse
 * @m: The string to be printed.
 */
void _print_rev_recursion(char *m)
{
	if (*m)
	{
		_print_rev_recursion(m + 1);
		_putchar(*m);
	}
}
