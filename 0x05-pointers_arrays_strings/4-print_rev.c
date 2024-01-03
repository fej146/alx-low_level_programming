#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @s: the string given
 * Return: 0
 */
void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (n = i - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
