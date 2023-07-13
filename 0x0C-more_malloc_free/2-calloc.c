#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates
 *           memory for an array using malloc
 *
 *           It is basically the equivalent to
 *           malloc followed by memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer with new allocated memory
 *         or NULL if it fails Set the allocated memory to zero
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);
	return (ptr);
}

