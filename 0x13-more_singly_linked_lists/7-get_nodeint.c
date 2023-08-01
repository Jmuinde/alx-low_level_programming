#include "lists.h"

/**
 * get_nodeint_at_index - function to traverse the linked list and
 * return the rth node
 * @head: head pointer
 * @index: position of a selected node
 * Return: nothing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int trav = 0;

	while (trav < index)
	{

		if ((*head).next == 0)
		{
			return (0);
		}
		else
		{
			head = (*head).next;
			trav++;
		}
	}
	return (head);
}
