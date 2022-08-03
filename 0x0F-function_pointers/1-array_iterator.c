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
	if (size <= 0)
		return;
	action(*array);
}
