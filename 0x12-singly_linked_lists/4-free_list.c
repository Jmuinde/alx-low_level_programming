#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - function to free the memory of a linked list
 * @head: head poineter
 * Return: free
 */
void free_list(list_t *head)
{
	if (head == 0)
		return;

	if ((*head).next != 0)
		free_list((*head).next);
	free((*head).str);
	free(head);
}
