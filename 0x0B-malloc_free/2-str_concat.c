#include "main.h"

/**
 * str_concat - function that concat 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: s3
 */

char *str_concat(char *s1, char *s2)
{
	int i, n1 = 0, n2 = 0;
	char *s3;

	while (s1[n1])
		n1++;
	while (s2[n2])
		n2++;
	if (s1 == NULL)
		n1 = 0;
	if (s2 == NULL)
		n2 = 0;
	s3 = (char *) malloc(sizeof(char) * (n1 + n2 + 1));

	for (i = 0; i < n1; i++)
		s3[i] = s1[i];
	for (i = 0; i < n2; i++)
		s3[i + n1] = s2[i];
	return (s3);
}
