#include <stdio.h>
#include <stdlib.h>
/**
 * main - where code starts
 * @argc: argucment count
 * @argv: the argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	/*checks if the program received 2 arguments*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/*convert the arguments passed to integers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	/*prints the products of the 2 arguments*/
	printf("%d\n", num1 * num2);
	return (0);
}
