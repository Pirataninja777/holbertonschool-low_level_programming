#include "main.h"
#include<stdio.h>

/** main check the code 
 * Return: Always 0.
 */
int main(void)
{
	int x;
	x=402;
	printf ("x=%d\n",x);
	reset_to_98 (&x);
	printf ("x=%d\n",x);
	return (0);
}
