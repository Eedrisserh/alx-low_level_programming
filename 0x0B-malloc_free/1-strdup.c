#include "main.h"

/**
 * _strdup - Function that duplicates a string
 * @str: Source which string will be copied from.
 * Return: returns 0
 */

char *_strdup(char *str)
{
	char *dest;

	if (str == NULL)
		return (NULL);
	dest = strdup(str);
	return (dest);
}
