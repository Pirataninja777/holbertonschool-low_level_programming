#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 if successful, 1 if there's an error in argument count.
 */
int main(int argc, char *argv[])
{

	int num1, num2, result;

		if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
