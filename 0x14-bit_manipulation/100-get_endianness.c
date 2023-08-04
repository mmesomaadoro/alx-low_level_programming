#include "main.h"
/**
 * get_endianness - to checks the endianness
 *
 * Return: to 1
 */
int get_endianness(void)
{
	unsigned int y;
	char *z;

	y = 1;
	z = (char *) &y;
	return ((int)*z);
}
