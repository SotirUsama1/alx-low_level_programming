#include "function_pointers.h"

/**
 * main - main program function
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	int (*func)(int, int);
	char operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	operation = *argv[2];

	if ((operation == '/' || operation == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(a, b);

	printf("%d\n", res);

	return (0);
}
