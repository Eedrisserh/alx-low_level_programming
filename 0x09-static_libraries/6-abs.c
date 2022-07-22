#include "main.h"
#include <stdio.h>
/**
 * _abs - A function that computes the absolute value of an int
 * @c: is the integer value that will be used for the argument
 * Return: 0 on succeess
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
