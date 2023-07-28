#include "lists.h"
#include "stdlib.h"

/**
* list_len - function to return the number of elements in a linked list
* @h: head pointer of the structuer node
* Return: the length 
*/
size_t list_len(const list_t *h)
{
	int check_len = 0;

	while (h != 0)
	{
		h = h->next;
		check_len++;
	}
	return (check_len);
}
