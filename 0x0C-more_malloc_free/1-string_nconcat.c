#include "main.h"

/**
 * string_nconcat - concat 2 strings using malloc
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len1, len2;

	for (i = 0; s1[i] != '\0'; i++)
		len1 = i;
        for (i = 0; s2[i] != '\0'; i++)
                len2 = i;
	if (n >= len2)
		n = len2;

	str = (char *) malloc (sizeof(char) * (len1 + n + 1));
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
                str[i + len1] = s2[i];
	str[n + len1] = '\0';
	return (str);
}
