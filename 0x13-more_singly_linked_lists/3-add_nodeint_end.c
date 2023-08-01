#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function to add a new node at the
 * end of a linked list
 * @head: head pointer
 * @n: constant interger variaable
 * Return: nothing
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *ptr;

	add = malloc(sizeof(listint_t));
	if (add == 0)
		return (0);

	(*add).n = n;
	(*add).next = 0;

	if (*head == 0)
	{
		*head = add;
		return (add);
	}

	ptr = *head;

	while ((*ptr).next != 0)
		ptr = (*ptr).next;

	(*ptr).next = add;

	return (add);
}
