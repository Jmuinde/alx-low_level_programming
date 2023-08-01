#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function to add a node in the linked list
 * structer
 * @head: head pointer
 * @n: number of nodes
 * Return: added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	if (head == 0)
		return (0);

	add = malloc(sizeof(listint_t));
	if (add == 0)
		return (0);

	(*add).n = n;
	(*add).next = *head;
	*head = add;

	return (add);
}
