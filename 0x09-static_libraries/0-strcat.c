/**
 * _strcat - concat src string to dest string
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: dest variable afer concat with
*/
char *_strcat(char *dest, char *src)
{
	int c, c1, c2;

	for (c1 = 0; dest[c1] != '\0';)
		c1++;
	for (c2 = 0; src[c2] != '\0';)
		c2++;
	for (c = 0; c < c2; c++)
		dest[c1 + c] = src[c];
	return (dest);
}
