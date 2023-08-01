#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double pointer to next node in listint_t
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *reg;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	reg = *head;
	*head = (*head)->next;
	free(reg);

	return (data);
}
