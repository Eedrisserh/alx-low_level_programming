#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dst: array will be copied to
 * @src: string will be copied
 *
 * Return: return string
 */
char *_strcpy(char *dst, char *src)
{
	int len = 0;

	while (len >= 0)
	{
		*(dst + len) = *(src + len);
		if (*(src + len) == '\0')
			break;
		len++;
	}
	return (dst);
}
