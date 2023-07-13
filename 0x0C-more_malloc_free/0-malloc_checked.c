#include <stdlib.h>

/**
 * malloc_checked - copies the string given as parameter
 * @int: assigned datatype
 * b: allocated to memory 'b'
 * Return: pointer to (llocated memory (Success), NULL (Error)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

