#include "main.h"

/**
 * binary_to_uint - Converts Binary Number to unsigned int.
 * @b: String containing Binary number.
 *
 * Return: Converted Number.
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[l] - '0');
	}

	return (dec_val);
}
