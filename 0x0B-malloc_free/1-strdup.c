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
	if (n == 0)
		return (NULL);
	dup = (char *) malloc(sizeof(char) * n);

	for (i = 0; i < n; i++)
		dup[i] = str[i];
	free(dup);
	return (dup);
}
