#include <stdio.h>

/**
 *main -> Alphabet printing
 *Non empty comment line
 *Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
