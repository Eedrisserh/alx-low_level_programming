#include "main.h"
/**
 * print_sign: A function to check for a sign
 * @n:	is the value that will be used to check the argument
 * Return: 0 on success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
