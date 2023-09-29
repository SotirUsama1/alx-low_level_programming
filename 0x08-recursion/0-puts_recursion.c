#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion: the function
 *
 * @s: string
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
}
