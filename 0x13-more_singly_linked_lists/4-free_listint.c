#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free memory of allocated
 * linked list
 * @head: head pointer
 * Return: freed memory
 */
void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	if ((*head).next != 0)
		free_listint((*head).next);
	free(head);
}
