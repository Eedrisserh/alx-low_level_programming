#include "main.h"
#include <string.h>

/**
 * _strcat - join two strings together
 * @dest: first string
 * @src: second string
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char **point;

	point = &dest;

	strcat(dest, src);
	*point  = dest;

	return (*point);
}
