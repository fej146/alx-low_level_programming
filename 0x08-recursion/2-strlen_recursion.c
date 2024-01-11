#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string passed
 * Return:int
 * FEJ146
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
		return (1 + _strlen_recursion(s + 1));
}
