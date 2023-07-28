#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function to  add a new node to
 * the linked list at the end
 * @head: head pointer
 * @str: pointer string
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int a;
	int x = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));

	for (a = 0; str[a] != '\0'; a++)
		x++;

	new->len = a;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
