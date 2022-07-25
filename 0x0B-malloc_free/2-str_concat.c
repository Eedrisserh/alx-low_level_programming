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
	unsigned int a, b, c, temp;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (s1[a] != '\0')
		a++;

	b = 0;
	while (s2[b] != '\0')
		b++;

	con = malloc(sizeof(char) * (a + b + 1));

	if (con == NULL)
	{
		free(con);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		con[c] = s1[c];

	temp = b;
	for (b = 0; b <= temp; c++, b++)
		con[c] = s2[b];

	return (con);
}
