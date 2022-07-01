#include <stdio.h>

/**
 *main -> Printing lowercase followed by upper case
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
{
		putchar(i);
}
	for (i = 65; i <= 90; i++)
{
		putchar(i);
}
	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
