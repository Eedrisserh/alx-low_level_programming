#include "main.h"

/**
 * _atoi - changes a string to an integer
 * @s: the string to be changed
 * Return: converted string to integer
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			x *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * x);
}