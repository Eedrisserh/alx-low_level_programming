#include "main.h"
/**
 * _islower - A function that check if a given character is a
 * lower case or not
 * @c: will be used for the argument
 * return: 0
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
