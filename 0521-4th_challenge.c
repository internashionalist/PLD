#include <stdio.h>

int main(void)
{
	float C, F;

	printf("Enter temperature in Celsius: ");
	scanf("%f", &C);
	{
		F = (C * 9 / 5) + 32;
	}

	printf("%.2f Celsius = %.2f Fahrenheit\n", C, F);

	return (0);
}
