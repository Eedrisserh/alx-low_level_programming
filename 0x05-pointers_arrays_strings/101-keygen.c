#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  generates random passwords for 101-crackme
 * @c: variable
 * Return: Always return a result
 */

int main(void)
{
	int r = 0;

	unsigned int c = 0;

	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
		break;
		c = c + r;
		printf("%c", r);
	}
	printf("%d\n", (2772 - c));
	return (0);
}