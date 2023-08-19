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
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (int i = 0 ; i <= size ; ++i)
		{
			for (int j = 0 ; j < size - i ; ++j)
				_putchar(' ');
			for (int l = 0 ; l < i ; ++l)
				_putchar('#');
			_putchar('\n');
		}
	}
}
