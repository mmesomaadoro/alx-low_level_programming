#include "lists.h"

/**
 * free_listint2 - To free a list
 * @head: double pointer to the head of the list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}

	*head = NULL;
}
