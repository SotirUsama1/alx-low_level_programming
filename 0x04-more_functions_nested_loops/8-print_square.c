#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_square(int size)
{
	int l, w;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= size; ++l)
		{
			for (w = 1; w <= size; ++w)
				_putchar('#');
			_putchar('\n');
		}
	}
}
