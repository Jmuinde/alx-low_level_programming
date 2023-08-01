#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function to delete the head noded
 * of a linked list
 * @head: head pointer
 * Return: null
 */
int pop_listint(listint_t **head)
{
	int nod;

	listint_t *ptr;

	if (*head == 0)
		return (0);

	nod = (*(*head)).n;

	ptr = *head;
	*head = (*(*head)).next;

	free(ptr);
	return (nod);
}
