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
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		/*print 0 if no argument is passed */
		printf("0\n");
		return (0);
	}
	/**
	 * initializing 3 int
	 * i = index for arguments
	 * j = index for char in each argument
	 * sum = the sum of the arguments
	 */
	for (i = 1; i < argc; i++)
	{
		/**
		 * check each character of the arguments for letters
		 * if there is a letter, print Error
		 */
		for (j = 0; (argv[i][j] = '\0'); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/*convert arguments to numbers and add them*/
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
