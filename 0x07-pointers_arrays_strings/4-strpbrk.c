/**
 * _strpbrk - a function that searches a
 *            string for any of a set of bytes.
 *
 * @s: pointer to input string
 * @accept: pointer to string we
 *         searching for in @s
 *
 * Return: pointer to the bytes in @s
 *         or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, flag;

	for (i = 0; s[0] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[0] == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
