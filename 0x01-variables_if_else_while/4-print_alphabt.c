#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *  main - Entry point
  *
  * Return: Always 0 (Success)
  */
	int main(void)
{
		char i;
	for (i = 'a'; i <= 'z'; i++)
{
	if (i != 'q' && i != 'e')
{
	putchar(i);
}
}

	putchar(10); /* this is an ascii code for new line*/

	return (0);
}

