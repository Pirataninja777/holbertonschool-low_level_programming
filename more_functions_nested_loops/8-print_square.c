#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square of '#' characters on the terminal.
 * @size: Size of the square (number of rows and columns).
 *
 * Description: Prints a square using '#' characters of dimension size x size.
 * If size is 0 or less, function prints only a newline.
 * Uses putchar function to print characters.
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			putchar('#');
		putchar('\n');
	}
}
