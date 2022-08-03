#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function on each element of
 * array
 * @array : The array to perform the operation opon
 * @size : size of the array
 * @action : pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = size; i >= 0; i--)
	{
	action(*array);
	array++;
	}
}
