/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring or
 *         NULL if substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[0] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[0] == needle[j] && needle[j + 1] != '\0')
			{
				return (needle);
			}
			else if (haystack[0] == needle[j])
			{
				continue;
			}
		}
		haystack++;
	}
	return (NULL);
}
