#include "lists.h"

/**
 * free_listint - To free a list
 * @head: points to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
