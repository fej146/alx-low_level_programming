#include "main.h"
/**
 * _islower - determines if a letter is lowercase
 *@c: the parameter entered
 * Return: 1 if c is lowercase, else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
