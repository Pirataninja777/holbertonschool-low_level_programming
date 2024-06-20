#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times,
 * followed by a new line.
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar(y / 10 + '0'); /* Print tens digit */
			_putchar(y % 10 + '0');     /* Print units digit */
		}
		_putchar('\n'); /* Print new line after each set of numbers */
	}
}
