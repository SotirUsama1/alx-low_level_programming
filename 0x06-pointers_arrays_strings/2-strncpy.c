/**
 * _strncpy - concat src string to dest string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concat
 *
 * Return: dest variable
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c, c2;

	for (c2 = 0; src[c2] != '\0';)
		c2++;
	for (c = 0; c < n && c < c2; c++)
		dest[c] = src[c];
	while (c < n)
	{
		dest[c] = '\0';
		i++;
	}
	return (dest);
}
