#include "function_pointers.h"

/**
 * int_index - the function
 *
 * @array: array
 * @size: size
 * @cmp: function
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(i))
			return (i);
		else
			return (-1);
	}
}
