#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0'); /* Print current digit */

		if (i != 9)
		{
			putchar(','); /* Print comma after digit */
			putchar(' '); /* Print space after comma */
		}
	}
	putchar('\n'); /* Print newline at the end */

	return (0);
}
