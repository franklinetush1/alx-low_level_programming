#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the address of the
 * head of the listint_t list.
 *
 * Description: Sets head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *X;

	if (head == NULL)
		return;

	while (*head)
	{
		X = (*head)->next;
		free(*head);
		*head = X;
	}

	head = NULL;
}
