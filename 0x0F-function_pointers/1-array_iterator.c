#include "function_pointers.h"

/**
 * array_iterator - array iterator function
 *
 * @array: array
 * @size: array size
 * @action: function to action on array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
