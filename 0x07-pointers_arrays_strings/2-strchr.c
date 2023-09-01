/**
 * _strchr - function
 *
 * @s: string variable
 * @c: char variable
 *
 * Return: ret
*/
char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	for (i = 0; s[i] != '\0'; ++i)
		if (s[i] == c)
			ret = &s[i - 1];
	return (ret);
}
