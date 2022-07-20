#include "main.h"

/**
 * _puts_recursion - Function to print a string
 * @s : Variable of character type that accepts the string
 * return : On success retruns nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
