#include "main.h"
#include <string.h>
/**
 * _memset - fill a memory with a constant character
 * @s: pointer to memory
 * @b: character to fill the memory with
 * @n: memory size
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **ptr;

	ptr = &s;
	memset(s, b, n);
	*ptr = s;
	return (*ptr);
}
