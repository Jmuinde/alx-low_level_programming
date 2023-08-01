#include "lists.h"

/**
* listint_len -function to count the number of elements 
* in a linked list
* @h: head pointer
* Return: the count
*/
size_t listint_len(const listint_t *h)
{
	int num = 0;

	if (h == 0)
		return (0);

	while (h != 0)
	{
		num++;
		h = (*h).next;

	}
	return (num);
}
