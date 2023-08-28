/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string variable
 *
 * Return: s variable
*/
char *cap_string(char *s)
{
	int i, j;
	char sep[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', 34, '(', ')'
		, '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			for (j = 0; j < 13; j++)
			{
				if (s[i - 1] == sep[j] || i == 0)
					s[i] -= 32;
			}
	return (s);
}
