#include "lists.h"

/**
 * check_cycle - check loop in a list
 * @list: beginning of a LL
 *
 * Return: 1 if success, and 0 if failed
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
		return (0);
	}
	slow = list;
	fast = list->next;
	while (fast && fast && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
