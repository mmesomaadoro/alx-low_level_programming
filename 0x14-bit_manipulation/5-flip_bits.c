#include "main.h"
/**
 * flip_bits - to returns the number of bits you would need to flip
 * to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: to x
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for  (x = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			x++;
	}
	return (x);
}
