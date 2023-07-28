#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function to print elements of a linked lits
 * @h: head pointer to structer node.
 * Return: elements of the linked list
 */
size_t print_list(const list_t *h)
{
	int check_size = 0;

	while (h != 0)
	{
		if ((*h).str == 0)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		check_size++;
	}

	return (check_size);
}
