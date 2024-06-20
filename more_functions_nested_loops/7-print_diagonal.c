#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed.
 *
 * Description: Prints a diagonal line of '\' characters starting from the
 * top-left of the terminal. If n is less than or equal to 0,
 * prints only a newline.
 * Uses _putchar function to print characters.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
