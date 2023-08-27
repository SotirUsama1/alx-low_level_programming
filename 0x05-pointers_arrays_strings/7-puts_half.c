#include "main.h"

/**
 * main - prints half of a string, followed by a new line.
 *
 * @str: input string variable
 *
 * Return: 0
*/

void puts_half(char *str)
{
        int len;
        int n;
        int i;

        for (len = 0; str[len] != '\0';)
                len++;
        if (len % 2 == 0)
        {
                n = len / 2;
                for (i = n; i <= len; i++)
                        _putchar(str[i]);
        }
        else
        {
                n = (len - 1) / 2;
                for (i = n + 1; i <= len; i++)
                        _putchar(str[i]);
        }
	_putchar('\n');
}
