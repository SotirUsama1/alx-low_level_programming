#include "main.h"

/**
 * print_triangles - print triangles
 *
 * @size: triangle dimension
 *
 * Return: Always 0 (Success)
 */

void print_triangles(int size)
{
	int i, j, l;
	
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= size; ++i)
		{
			for (j = 0; j < size - i; ++j)
				_putchar(' ');
			for (l = 0; l < i; ++l)
				_putchar('#');
			_putchar('\n');
		}
	}
}
