/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: string variable
 *
 * Return: s
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
			continue;
		}
	}
	return (s);
}
