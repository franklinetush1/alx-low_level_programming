#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index of a listint_t list.
 * @head: A pointer to the address of the
 * head of listint_t list
 * @index: The index of the node to be deleted
 *
 * Return: On success = 1.
 *         On failure = -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *ctrl = *head;
	unsigned int nd;

	if (ctrl == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ctrl);
		return (1);
	}

	for (nd = 0; nd < (index - 1); nd++)
	{
		if (ctrl->next == NULL)
			return (-1);

		ctrl = ctrl->next;
	}

	tmp = ctrl->next;
	ctrl->next = tmp->next;
	free(tmp);
	return (1);
}
