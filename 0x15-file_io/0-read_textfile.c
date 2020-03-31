#include "holberton.h"
/**
 * read_textfile - read and write of an text.
 * @filename: pointer an text file.
 * @letters: number characters.
 * Return: writed buffer.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int arch;
	char buffer = NULL;
	ssize_t Rcnt, Wcnt;

	if (filename == NULL)
		return (0);

	arch = open(filename, O_RDONLY);

	if (arch == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	Rcnt = read(arch, buffer, letters);

	if (Rcnt == -1)
		return (0);

	Wcnt = write(STDOUT_FILENO, buffer, Rcnt);

	if (Wcnt == -1 || Rcnt != Wcnt)
		return (0);

	free(buffer);
	close(arch);
	return (Wcnt);
}
