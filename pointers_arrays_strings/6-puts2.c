#include "main.h"

/**
 * print_every_other - Prints every other character of a string.
 * @str: Input string.
 *
 * Description:
 * This function prints characters of 'str' starting with the first character,
 * then skips one character, and prints the next one, and so on, until the end
 * of the string. It ends with a new line.
 */
void print_every_other(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2; /* Move to the next character skipping one */
	}
	_putchar('\n'); /* Print a new line after printing characters */
}
