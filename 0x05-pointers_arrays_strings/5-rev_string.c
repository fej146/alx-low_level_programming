#include "main.h"
/**
 * rev_string - reverses strings
 * @s: the string tha is entered
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
