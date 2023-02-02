#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *X;

	while (head)
	{
		X = head->next;
		free(head);
		head = X;
	}
}
