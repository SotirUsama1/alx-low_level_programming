/**
 * _strcmp - compare s1 & s2
 *
 * @s1: string variable 1
 * @s2: string variable 2
 *
 * Return: r the difference
*/
int _strcmp(char *s1, char *s2)
{
	int r, i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
			r = s1[i] - s2[i];

		i++;
	}
	return (r);
}
