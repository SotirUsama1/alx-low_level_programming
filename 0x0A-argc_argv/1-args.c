#include "main.h"

/**
 * main - function prints number of arguments passed to the terminal
 *
 * @argc: arguments counter
 * @argv: arguments array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
