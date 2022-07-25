#include "main.h"

/**
 * str_concat - Function that concatenates two strings
 * @s1: Is the source string
 * @s2: Is the destination string
 * Return: On success return set of the strings else return 0
 */

char *str_concat(char *s1, char *s2)
{
	int len;

	len = strlen(s1);
	s2 = malloc(sizeof(char) * len);
	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	strcat(s2, s1);
	return (s2);
}
