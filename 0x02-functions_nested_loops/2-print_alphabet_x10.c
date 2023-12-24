#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10x,then new line.
 */
void print_alphabet_x10(void)
{
	int line = 0;
	char a;

	while (line < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		line++;
	}
}
