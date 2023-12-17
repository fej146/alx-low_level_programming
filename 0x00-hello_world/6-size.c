#include <stdio.h>
/**
 * main - printing the size of variable types
 * Return: 0
 */
int main(void)
{
	long long int a;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of a int: %ld byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
