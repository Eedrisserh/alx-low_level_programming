#include "main.h"

/**
 * str_concat - Function that concatenates two strings
 * @s1: Is the source string
 * @s2: Is the destination string
 * Return: On success return set of the strings else return 0
 */

char *str_concat(char *s1, char *s2)
{
	char *con;

	con = strcat(s2, s1);
	return (con);
}
