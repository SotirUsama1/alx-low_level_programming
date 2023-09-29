#include "main.h"

/**
 * _strlen_recursion - strlen function using recursion
 *
 * @s: string
 *
 * Return: strlen
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		s++;
		_strlen_recursion(s);
	}
	return (i);
}
