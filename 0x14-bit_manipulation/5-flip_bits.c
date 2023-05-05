#include "main.h"

/**
 * flip_bits - Counts number of bits to change to
 * get from one number to another.
 * @n: First Number.
 * @m: Second Number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
