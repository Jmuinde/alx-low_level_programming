#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - function to free the memory of linked list
 * @head: head pointer
 * Return: 0
 */
void free_list(list_t *head)
{
	if ((*head).next !=0)
		free_list((*head).next);
	free((*head).str);
	free(head);
}
