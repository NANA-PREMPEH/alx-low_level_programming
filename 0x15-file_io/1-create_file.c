#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int faa;
	int all_letters;
	int re_write;

	if (!filename)
		return (-1);

	faa = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (faa == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (all_letters = 0; text_content[all_letters]; all_letters++)
		;

	re_write = write(faa, text_content, all_letters);

	if (re_write == -1)
		return (-1);

	close(faa);

	return (1);
}
