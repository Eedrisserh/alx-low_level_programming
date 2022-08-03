#include "function_pointers.h"

/**
 * print_name - A function that prints name using function pointer
 * @name : Name to be printed
 * @f : Function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == '\n' || f == '\n')
		return;
		f(name);
}
