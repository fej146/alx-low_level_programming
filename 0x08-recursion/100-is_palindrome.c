#include "main.h"
#include <string.h>
/**
 * pal_check - check if s is palindrome.
 * @s: string base address.
 * @l: left index.
 * @r: right index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_check(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	else if (s[l] == s[r])
		return (pal_check(s, l + 1, r - 1));
	else
		return (0);
}
/**
 * is_palindrome - chesks if string is palindrome
 * @s: string argument given
 * Return: 1 for true, 0 for false
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
		return (1);
	return (pal_check(s, 0, len - 1));
}
