#include "main.h"

/**
 * main - functon multiply to intgers
 *
 * @argc: arguments counter
 * @argv: arguments array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	(void) argc;
	return (0);
}
