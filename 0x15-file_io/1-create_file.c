#include "holberton.h"
/**
 * create_file - create and write in new document.
 * @filename: pointer an text file.
 * @text_content: number characters.
 * Return: document create.
 */
int create_file(const char *filename, char *text_content)
{
	int arch, Wte = NULL, cnt;

	if (filename == NULL)
		return (-1);

	arch = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (arch == -1)
		return (-1);
	if (text_content)
	{
		for (cnt = 1; text_content[cnt] != '\0'; cnt++)
		{}
		Wte = write(arch, text_content, cnt);
		if (Wte == -1)
			return (-1);
	}
	close(arch);
	return (1);
}
