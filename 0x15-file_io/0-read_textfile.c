#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: filename.
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(x, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(x);

	free(buf);

	return (nwr);
}
