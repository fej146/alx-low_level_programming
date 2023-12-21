#include <stdio.h>
/**
 * main - the entry point for the function
 * Return: 0
 */
int main(void)
{
	char c;
	char f;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	for (f = 'a'; f <= 'f'; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
