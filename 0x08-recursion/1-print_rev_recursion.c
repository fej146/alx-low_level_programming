#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 * Return 0;
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /*this if statement forms base case */
	}
	else
	{
		_print_rev_recursion(s + 1); /* recursive procedure*/
		_putchar(*s);
	}
}
