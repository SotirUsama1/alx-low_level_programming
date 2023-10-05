#include "main.h"

/**
 * _strdup - duplicate a string
 *
 * @str: string variable
 *
 * Return: dup
 */

char *_strdup(char *str)
{
	int i, n;
	char *dup;

	for (n = 0; str[n] != '\0';)
		n++;
	if (*str == NULL)
		return (NULL);
	dup = (char *) malloc(sizeof(char) * n + 1);

	for (i = 0; i < n; i++)
		dup[i] = str[i];
	return (dup);
}
