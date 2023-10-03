/**
 * _memset - task 0
 *
 * @s: string variable
 * @b: character to replace with
 * @n: number of bytes
 *
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
