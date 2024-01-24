#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - where code starts
 * @argc: argucment count
 * @argv: the argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		/*print 0 if no argument is passed */
		printf("0\n");
		return (0);
	}
	for (i = 0; argv[i] != '\0'; i++)
	{
		n = strtol(agrv[i], &flag, 10)
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
