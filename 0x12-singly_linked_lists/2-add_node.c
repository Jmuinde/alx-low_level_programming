#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - function to add  a new node to the linked
 * list
 * @head: head pointer of the struct node
 * @str: string pointer
 * Return: added node
 */
list_t *add_node(list_t **head, const char *str)
{
	int n;
	int check_size = 0;
	list_t *add;

	if (head == 0)
		return (0);

	add = malloc(sizeof(list_t));
	if (add == 0)
		return (0);

	for (n = 0; str[n] != '\0'; n++)
		check_size++;

	(*add).len = n;
	(*add).str = strdup(str);
	(*add).next = *head;

	*head = add;

	return (add);
}
