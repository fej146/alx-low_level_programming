#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int line = 0;
	char a;

	while (line++ < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
	}
	_putchar('\n');
}
