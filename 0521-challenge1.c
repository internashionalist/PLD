#include <stdio.h>

/**
 * main - all even numbers 1..100 using for loop
 * @n: initial parameter
 *
 * Return: Always 0 (Success)
 */

int main(void) 
{
	int n;
	for (n = 1; n <= 100; n++) 
	{
		if (n % 2 == 0)
		{
			printf("%d", n);
		}
	}
	putchar('\n');
	return (0);
}
