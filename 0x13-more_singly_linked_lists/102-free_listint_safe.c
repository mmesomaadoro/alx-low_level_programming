#include "lists.h"

/**
 * free_listint_safe - function that frees a list
 * @h: double pointer to first node in list
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t size = 0;
	int reg;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		reg = *h - (*h)->next;
		if (reg > 0)
		{
			temp = (*h)->next;
			free(*h);
			(*h) = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
