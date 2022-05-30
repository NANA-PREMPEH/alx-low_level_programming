#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int faa;
	int all_letters;
	int re_write;

	if (!filename)
		return (-1);

	faa = open(filename, O_WRONLY | O_APPEND);

	if (faa == -1)
		return (-1);

	if (text_content)
	{
		for (all_letters = 0; text_content[all_letters]; all_letters++)
			;

		re_write = write(faa, text_content, all_letters);

		if (re_write == -1)
			return (-1);
	}

	close(faa);

	return (1);
}
