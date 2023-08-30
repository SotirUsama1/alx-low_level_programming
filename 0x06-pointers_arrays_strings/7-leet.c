/**
 * leet - replace some letters with some numbers
 *
 * @s: string variable
 * 
 * Return: s
*/
char *leet(char *s)
{
	int i, j;
	char lc[6] = {'a', 'e', 'o', 't', 'l'};
	char uc[6] = {'A', 'E', 'O', 'T', 'L'};
	char r[6] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lc[j] || s[i] == uc[j])
			        s[i] = r[j];
		}
	return (s);
}
