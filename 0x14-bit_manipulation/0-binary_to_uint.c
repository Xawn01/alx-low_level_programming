#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int j, k;

	if (!b)
		return (0);

	x = 0;

	for (j = 0; b[j] != '\0'; j++)
		;

	for (j--, k = 1; j >= 0; j--, k *= 2)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}

		if (b[j] & 1)
		{
			x += k;
		}
	}

	return (x);
}
