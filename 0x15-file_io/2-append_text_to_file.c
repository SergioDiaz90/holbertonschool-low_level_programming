#include "holberton.h"
/**
 * append_text_to_file - add text in the end the file.
 * @filename: pointer an text file.
 * @text_content: number characters.
 * Return: 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int arch, Wte = NULL, cnt;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	arch = open(filename, O_WRONLY | O_APPEND);

	if (arch == -1)
		return (-1);

	for (cnt = 1; text_content[cnt] != '\0'; cnt++)
	{}
	Wte = write(arch, text_content, cnt);

	if (Wte == -1)
		return (-1);

	close(arch);
	return (1);
}
