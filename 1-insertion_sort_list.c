#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the insertion sort algorithm.
 * @list: A pointer of a pointer to the first element of the list.
 *
 * Return: Void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *node_next, *node_prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node != NULL)
	{
		node_prev = node->prev;
		node_next = node->next;
		while (node_prev != NULL && node->n < node_prev->n)
		{
			node_prev->next = node_next;
			if (node_next != NULL)
				node_next->prev = node_prev;
			node_next = node_prev;
			node_prev = node_prev->prev;
			node->next = node_next;
			node->prev = node_prev;
			node_next->prev = node;
			if (node_prev != NULL)
				(node_prev)->next = node;
			else
				*list = node;
			print_list(*list);
		}
		node = node->next;
	}
}
