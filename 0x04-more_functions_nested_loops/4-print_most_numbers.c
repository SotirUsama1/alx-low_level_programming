#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 *                 from 2 and 4 and you can
 *                 only use _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num = 0;

	char c;

	do {
		c = num + 48;
		if (c == '2' || c == '4')
		{
			num++;
			continue;
		}
		else
		{
			_putchar(num + 48);
			num++;
		}

	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
