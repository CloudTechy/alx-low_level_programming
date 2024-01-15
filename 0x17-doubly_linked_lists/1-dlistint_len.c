#include "lists.h"

/**
 * dlistint_len- prints all elements of a dlistint_t list
 * @h: a pointer to link node
 * Return: total elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t total = 0;

	if (h == NULL)
		return (total);

	while (h->prev != NULL)
		h = h->prev;


	while (h != NULL)
	{
		total++;
		h = h->next;
	}
	return (total);
}
