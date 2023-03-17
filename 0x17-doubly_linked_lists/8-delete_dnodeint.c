#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: when succesful - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *xp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (xp == NULL)
			return (-1);
		xp = xp->next;
	}

	if (xp == *head)
	{
		*head = xp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		xp->prev->next = xp->next;
		if (xp->next != NULL)
			xp->next->prev = xp->prev;
	}

	free(xp);
	return (1);
}
