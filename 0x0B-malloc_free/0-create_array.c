#include "main.h"

/**
 * create_array - A Function that creates an array of chars
 * and initializes it with a specific char
 * @size: Is the size of the array
 * @c: Is the array to be created
 * Return: On success returns the initialized element
 * otherwise 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size <= 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	
	for (i = 0; i <= size; i++)
	arr[i] = c;
	return(arr);
	free(arr);
}
