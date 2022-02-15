#include "sort.h"
/**
 * insertion_sort_list - sort a doubly linked list
 * @list: the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (!(list && *list && (*list)->next))
		return;

	a = (*list)->next;

	while (a)
	{
		b = a;
		a = a->next;
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				swapper(b->prev, b);
				if (!b->prev)
					*list = b;
				print_list((const listint_t *)*list);
			}
			else
				b = b->prev;
		}
	}

}

/**
 * swapper -func to help swap 2 nodes
 * @a:node1
 * @b:node2
 */
void swapper(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}
