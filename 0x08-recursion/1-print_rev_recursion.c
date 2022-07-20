#include "main.h"

/**
 * _print_rev_recursion - function that prints set of strings in reverse
 *
 * @s: Variable that receives the strings
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}
