#include "lists.h"

/**
 * check_cycle - function checks if a singly linked list has a cycle in it.
 * @list: pointer to the beginning of the node
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast = list;
	listint_t *slow = list;

	if (!list)
		return (0);
	while (fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		return (1);
	}
	return (0);
}
