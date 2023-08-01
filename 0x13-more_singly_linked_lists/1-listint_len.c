#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: pointer to next node in listint_t
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t reg = 0;

	while (h != NULL)
	{
		reg++;
		h = h->next;
	}

	return (reg);
}
