#include <stdio.h>

/*
 * main - Entry point of the program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc __attribute__((unused)),
		char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);/* Print the number of arguments*/
	return (0);
}
