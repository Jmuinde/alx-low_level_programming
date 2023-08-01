#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print the elements of a linked list
 * listint_t
 * @h: head pointer
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	int check_size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		check_size++;
	}
	return (check_size);
}
