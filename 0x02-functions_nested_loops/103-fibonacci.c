#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	float total;
	unsigned long f1, f2, fsum;

	f1 = 0;
	f2 = 1;

	while (1)
	{
		fsum = f1 + f2;
		if (fsum > 4000000)
			break;

		if ((fsum % 2) == 0)
			total += fsum;

		f1 = f2;
		f2 = fsum;
	}
	printf("%.0f\n", total);

	return (0);
}
