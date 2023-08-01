#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to next node in listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t reg = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		reg++;
		h = h->next;
	}

	return (reg);
}
