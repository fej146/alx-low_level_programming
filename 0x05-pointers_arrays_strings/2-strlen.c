#include "main.h"
/**
 * _strlen - counts the number of characters in a string
 * @s: characters to be counted
 * Retunr: int of number of count
 */
int _strlen(char *s)
{
	int n;
	int strl = 0; /*strl - string length*/

	for (n = 0; s[n] != '\0'; n++)
		strl++;
	return (strl);
}
