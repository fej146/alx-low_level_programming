#include <stdio.h>
/**
 * main - the entry point for the function
 * Return: 0
 */
int main(void)
{
	char c;
	char f;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (f = 'A'; f <= 'Z'; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
