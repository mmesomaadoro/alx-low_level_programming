#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: double pointer to next node in listint_t
 * @idx: index where new node will be added in listint_t
 * @n: data in listint_t
 * Return: address of the new node, or NULL if it failed
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	count = 0;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}

