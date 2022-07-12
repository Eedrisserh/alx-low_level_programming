#include "main.h"

/**
 * swap_int - Function to swaps the value of two integers
 * @a: an integer to swap out
 * @b: an integer to swap in
 * returns nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
