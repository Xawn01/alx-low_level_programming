#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 * return: always 0 (success)
 *
 */

int main(void)
{
	char low;
	
	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	
	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);

	return (0);
}
