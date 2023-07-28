#include "lists.h"

/**
* list_len - function to print number of elements in the structer node
* @h: head pointer of the structer node
* Return: 0
*/
size_t list_len(const list_t *h)
{
	int check_len = 0;

	while (h != 0)
	{
		h = (*h).next;
		check_len++;
	}
	return (check_len);
}
