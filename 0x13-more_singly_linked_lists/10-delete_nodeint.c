#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in a
 * given index in a listint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	previous = NULL;
	count = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}

