#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t;
	int lnt, y;

	t = 0;

	if (!b)
		return (0);


	for (lnt = 0; b[lnt] != '\0'; lnt++)
		;


	for (lnt--, y = 1; lnt >= 0; lnt--, y *= 2)
	{
		if (b[lnt] != '0' && b[lnt] != '1')
		{
			return (0);
		}

		if (b[lnt] & 1)
		{
			t += y;
		}
	}

	return (t);
}
