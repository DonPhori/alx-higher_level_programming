#include "lists.h"

/**
 * check_cycle - check if a singly linked list has a cycle in it
 * @list: linked list
 * Return: 0 if list does no have a cycle, 1 if it has
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	slow = list;
	fast = list;

	while (slow && fast)
	{
		if (slow->next == NULL)
		{
			return (0);
		}
		slow = slow->next;
		fast = fast->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}
