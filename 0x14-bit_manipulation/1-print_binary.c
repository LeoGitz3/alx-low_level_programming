#include "main.h"

/**
 * print_binary - Prints Binary equivalent of a decimal number.
 * @n: Number to print in bianry.
 */
void print_binary(unsigned long int n)
{
	int l, count = 0;
	unsigned long int current;

	for (l = 63; l >= 0; l--)
	{
		current = n >> l;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
