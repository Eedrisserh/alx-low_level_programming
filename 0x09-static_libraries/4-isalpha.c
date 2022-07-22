#include "main.h"
/**
 * _isalpha - Function to check if a given letter c is
 * is an alphabet or not
 * @c: is the value that will be used for the arguement
 * Return: 0 on success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
