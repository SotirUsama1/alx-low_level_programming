#include "main.h"

/**
 * _puts_recursion - function
 *
 * @s: string variable
 *
 * Return: nothing
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
	else
		_putchar('\n');
}
