#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - a pinter function that adds a new node to the existing structure node at the end
 * @head: head pointer of the structer node
 * @str: pointer string
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int a;
	int x = 0;
	list_t *add;
	list_t *hold;

	add = malloc(sizeof(list_t));

	for (a = 0; str[a] != '\0'; a++)
	{
		x++;
	}

	(*add).len = a;
	(*add).str = strdup(str);
	(*add).next = 0;

	if (*head == 0)
	{
		*head = add;
		return (add);
	}

	hold = *head;

	while ((*hold).next != 0)
		hold =(*hold).next;

	(*hold).next = add;

	return (add);
}
