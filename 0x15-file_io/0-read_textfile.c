#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t a, b;
	char *buf;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	a = read(i, buf, letters);
	b = write(STDOUT_FILENO, buf, a);

	close(i);

	free(buf);

	return (b);
}
