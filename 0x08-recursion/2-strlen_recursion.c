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
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
