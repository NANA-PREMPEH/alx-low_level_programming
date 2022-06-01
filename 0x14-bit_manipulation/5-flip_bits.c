#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_of_bits;

	for (n_of_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			n_of_bits++;
	}

	return (n_of_bits);
}
