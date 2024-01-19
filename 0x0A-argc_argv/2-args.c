#include <stdio.h>
/**
 * main - prints the nuber of arguments
 * @argc: count of the argument
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
