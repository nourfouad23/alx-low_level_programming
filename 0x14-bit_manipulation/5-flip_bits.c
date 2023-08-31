#include "main.h"

/**
 * flip_bits - gets the number of bits flipped form n to m
 * @n: initial lu int
 * @m: secondary lu int
 *
 * Return: number of bits need to flip to get from `n to `m`
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitSize;
	unsigned long int result;
	unsigned long int i;

	bitSize = sizeof(n) * 8 - 1;

	result = 0;
	i = 0;

	while (i <= bitSize)
	{
		if ((n & 1) != (m & 1))
			result++;

		n = n >> 1;
		m = m >> 1;

		i++;
	}

	return (result);

}
