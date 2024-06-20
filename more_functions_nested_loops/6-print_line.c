#include "main.h"

/**
 * print_line - Prints a straight line of a specified length in the terminal.
 * @n: The length of the line to print.
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_'); /* Replace '_' with the character you want to print */
	}
	_putchar('\n'); /* Move to the next line after printing the line */
}
