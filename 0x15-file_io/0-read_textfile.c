#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: the number of letters read and printed
 * If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	close(op);
	free(buff);

	return (wr);
}
