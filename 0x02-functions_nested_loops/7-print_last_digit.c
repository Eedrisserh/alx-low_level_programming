#include "main.h"
/**
 * print_last_digit - Function to print the last digit of a set of numbers
 * @n: Is the variable that accepts the argument
 * Return: 0 on success
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;

	l = n % 10;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
