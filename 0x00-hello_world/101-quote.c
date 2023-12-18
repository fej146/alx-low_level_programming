#include <stdio.h>
#include <unistd.h>
/**
 * main - Writing out a text without printf/puts
 * Return: 1 to the standard error
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
