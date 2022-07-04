#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *main -> Alphabet printing
 *Non empty comment line
 *Return: Always 0 (Success)
 */
	int main(void)
{
	int c;
	int d;

	for (c = 48; c <= 57; c++)
	for (d = 48; d <= 57; d++)
{

	putchar(c);
	putchar(d);
{
	putchar(44);
	putchar(32);
}

}
	putchar(10); /* this is an ascii code for new line*/
	return (0);
}
