#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Function prototypes */
int rand(void);
void srand(unsigned int);

/* Main function */
int main(void)
{
	int n, last_digit;

	srand((unsigned int)time(0)); /* Initialize random seed */

	n = rand(); /* Generate a random number and assign it to n */

	last_digit = n % 10; /* Calculate the last digit of n */

	printf("Last digit of %d is ", n);

	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}

	return (0);
}

