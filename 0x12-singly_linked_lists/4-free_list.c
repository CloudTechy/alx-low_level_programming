#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *cur;

	while ((cur = head) != NULL)
	{
		head = head->next;
		free(cur->str);
		free(cur);
	}
}

