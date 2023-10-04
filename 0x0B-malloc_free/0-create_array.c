#include "main.h"

/**
 * create_array - create array using malloc
 *
 * @size: array size
 * @c: char to set the array values to
 *
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(c));
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
