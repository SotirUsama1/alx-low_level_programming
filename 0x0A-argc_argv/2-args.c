#include "main.h"

/**
 * main - function prints arguments each in a seprate line
 *
 * @argc: arguments counter
 * @argv: arguments array
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
		printf("%s\n", argv[i])
	(void) argc;
	return (0);
}
