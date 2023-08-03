#include "main.h"

/**
 * print_binary - print the binary representation
 * @n: unsigned long int
 * Return: No return
 */
void print_binary(unsigned long int n)
{
	int t, r = 0;
	unsigned long int bit, z = 1;

	for (t = 45; t >= 0; t--)
	{
		bit = (n >> t) & z;

		if (bit)
		{
			_putchar('1');
			r++;
		}
		else 
			_putchar('0');
	}
	if (!r)
		_putchar('0');
}
