#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * Else - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *X, *A;

	if (head == NULL || head->next == NULL)
		return (NULL);

	X = head->next;
	A = (head->next)->next;

	while (A)
	{
		if (X == A)
		{
			X = head;

			while (X != A)
			{
				X = X->next;
				A = A->next;
			}

			return (X);
		}

		X = X->next;
		A = (A->next)->next;
	}

	return (NULL);
}
