#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function to free allocated memory of a list
 * @head: head pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head)
	{
		while (*head != NULL)
		{
			ptr = *head;
			*head = (*ptr).next;
			free(ptr);
		}
	}

}
