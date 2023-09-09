#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/
char *_strdup(char *str)
{
	char* new;
	int i, n;

	while (str[n] != '\0')
		n++;
	new = (char*) malloc((n + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		new[i] == str[i];
	return (new);
}
