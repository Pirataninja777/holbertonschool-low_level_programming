#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: The string to process.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);   /* Print the current character */
		i += 2;             /* Move to the next character skipping one */
	}
	_putchar('\n');         /* Print a new line after printing characters */
}
