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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
