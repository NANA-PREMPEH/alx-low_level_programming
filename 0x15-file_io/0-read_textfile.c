#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int faa;
	ssize_t n_read, n_write;
	char *buffur;

	if (!filename)
		return (0);

	faa = open(filename, O_RDONLY);

	if (faa == -1)
		return (0);

	buffur = malloc(sizeof(char) * (letters));
	if (!buffur)
		return (0);

	n_read = read(faa, buffur, letters);
	n_write = write(STDOUT_FILENO, buffur, n_read);

	close(faa);

	free(buffur);

	return (n_write);
}
