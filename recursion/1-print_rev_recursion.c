#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: Pointer to the start of the string to be printed
 *
 * Description:
 * This function recursively prints the characters of the string 's' in reverse order.
 * It first calls itself with the next character and then prints the current character.
 *
 * Return: void (does not return a value)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
