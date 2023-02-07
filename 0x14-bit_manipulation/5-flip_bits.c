#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: start
 * @m: end
 *
 * Return: number bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0;
	unsigned long int s;

	s = n ^ m;

	while (s)
	{
		bit += s & 1;
		s >>= 1;
	}

	return (bit);
}
