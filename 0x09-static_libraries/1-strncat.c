/**
 * _strncat - concat src string to dest string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concat
 *
 * Return: dest variable afer concat with
*/
char *_strncat(char *dest, char *src, int n)
{
	int c, c1, c2;

	for (c1 = 0; dest[c1] != '\0';)
		c1++;
	for (c2 = 0; src[c2] != '\0';)
		c2++;
	for (c = 0; c < n && c < c2; c++)
		dest[c1 + c] = src[c];
	return (dest);
}
