#include "lists.h"

/**
 * list_len - prints number of elements of a list_t list.
 * @h: pointer to linked list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count  = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
