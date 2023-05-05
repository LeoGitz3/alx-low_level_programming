#include "main.h"

/**
 * get_endianness - Checks if machine is Little or Big endian.
 * Return: 0 (Big), 1 (Little)
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *c = (char *) &l;

	return (*c);
}
