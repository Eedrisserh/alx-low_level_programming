#include "variadic_functions.h"

/**
 * sum_them_all - Function to sum all integers using variadic
 * @n : Number of arguments to be computed
 * Return: sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(list, int);

	va_end(list);

	return (sum);
}
