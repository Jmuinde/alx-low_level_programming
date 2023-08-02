#include "lists.h"

/**
 * reverse_listint - function to reverse a linked list
 *
 * @head: head pointer
 *
 * Return: pointer to the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fst;
	listint_t *sec;

	if (*head == NULL)
		return (NULL);

	if ((*(*head)).next == NULL)
		return (*head);

	fst = *head;
	sec = (*fst).next;
	(*fst).next = NULL;
	while (1)
	{
		if ((*sec).next == NULL)
		{
			(*sec).next = *head;
			*head = sec;
			break;
		}
		fst = sec;
		sec = (*fst).next;
		(*fst).next = *head;
		*head = fst;
	}

	return (*head);
}
