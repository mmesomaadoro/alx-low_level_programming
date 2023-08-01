#include "lists.h"

/**
 * sum_listint - sum of all the data  in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: sum of all the in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum_node;

	sum_node = 0;

	while (head)
	{
		sum_node += head->n;
		head = head->next;
	}
	return (sum_node);
}

