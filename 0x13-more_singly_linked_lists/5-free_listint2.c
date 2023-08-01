#include "lists.h"

/**
 * free_listint2 - To free a list
 * @head: double pointer to node to be freed
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}

	*head = NULL;
}
