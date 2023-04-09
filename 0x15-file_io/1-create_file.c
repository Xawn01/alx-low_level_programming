#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int j;
	int a;

	if (!filename)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (j = 0; text_content[j]; j++)
		;

	a = write(i, text_content, j);

	if (a == -1)
		return (-1);

	close(i);

	return (1);
}
