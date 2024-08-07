#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as command-line arguments.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful, 1 if there's an error
 * (non-digit character found).
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

		for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

	return (0);
}
