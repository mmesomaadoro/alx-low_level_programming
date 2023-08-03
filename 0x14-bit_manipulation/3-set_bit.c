#include "main.h"

/**
 * set_bit - to sets the value of a bit to 1 at given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: to -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r, bit;

	bit = 63;

	if (index > bit)
		return (-1);

	r = 1 << index;
	*n = *n | r;
	return (1);
}

