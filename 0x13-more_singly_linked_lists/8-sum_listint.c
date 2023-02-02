#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 * data of listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 * Else - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
