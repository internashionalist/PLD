#include <stdio.h>

/**
 * main - convert Celsius to Fahrenheit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	float C, F;

	printf("Enter temperature in Celsius: ");
	scanf("%f", &C);

	F = (C * 9 / 5) + 32;

	printf("%.2f degrees Celsius = %.2f degrees Fahrenheit\n", C, F);

	return (0);
}
