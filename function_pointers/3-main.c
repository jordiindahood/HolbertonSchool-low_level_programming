#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d",(*get_op_func(argv[2]))(a, b));

	return (0);
}