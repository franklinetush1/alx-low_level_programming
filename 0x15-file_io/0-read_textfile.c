#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: Number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wrt;
	char *a;

	if (filename == NULL)
		return (0);

	a = malloc(sizeof(char) * letters);
	if (a == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, a, letters);
	wrt = write(STDOUT_FILENO, a, rd);

	if (op == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(a);
		return (0);
	}

	free(a);
	close(op);

	return (wrt);
}
