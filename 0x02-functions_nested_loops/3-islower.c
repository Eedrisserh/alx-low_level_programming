#include "main.h"
/**
 * _islower - A function that check if a given character is a
 * lower case or not
 * @c: will be used for the argument
 * Return: 0 on success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
