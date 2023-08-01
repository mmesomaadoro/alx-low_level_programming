#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: Double pointer to the list head
 * @n: value to be assign to the new node
 *Return: The new wlement address or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *reg = *head;

		while (reg->next != NULL)
			reg = reg->next;

		reg->next = new_node;
	}
	return (new_node);
}
