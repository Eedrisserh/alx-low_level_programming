#include <stdio.h>
#include "main.h"

/**
 * _strchr - a function that locate character in string
 * @s: first input
 * @c: second input
 * Return: ALways 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
