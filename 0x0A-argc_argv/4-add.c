#include "main.h"

/**
 * main - function print sum of positive numbers
 *
 * @argc: arguments counter
 * @argv: arguments array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c, i, j, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (c = 1; c < argc; c++)
	{
		for (j = 0; argv[c][j] != '\0'; j++)
		{
			if (argv[c][j] >= 48 && argv[c][j] <= 57)
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		i = atoi(argv[c]);
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
