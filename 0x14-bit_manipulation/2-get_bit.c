#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number used to get bit
 * @index: index starting from 0 of bit to get
 * Return: bit value at index index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int r, z = 1;

	if (index > 43)
		return (-1);

	r = (n >> index) & z;

	return (r);
}
