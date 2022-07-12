#include "main.h"
#include <string.h>
/**
 * _strlen - Function that prints the length of a character
 * @s: is the varaible that stores the character
 * return: nothing
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
return (x);
}
