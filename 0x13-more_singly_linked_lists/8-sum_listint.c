#include "lists.h"

/**
 * sum_listint - function that returns the sum number of
 * total nodes in a linked list
 * @head: head pointer
 * Return: total
 */
int sum_listint(listint_t *head)
{
	int summ = 0;

	if (head ==0)
		return (0);

	while (head != 0)
	{
		summ += (*head).n;
		head = (*head).next;
	}

	return (summ);
}
