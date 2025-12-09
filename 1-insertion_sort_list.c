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
	int swap = 1;
	listint_t **node = list, *tmp_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	while (swap == 1)
	{
		swap = 0;
		node = list;
		while ((*node)->next != NULL)
		{
			if ((*node)->n > ((*node)->next)->n)
			{
				tmp_node = (*node)->next;
				if ((*node)->prev != NULL)
					((*node)->prev)->next = tmp_node;
				if (tmp_node->next != NULL)
					(tmp_node->next)->prev = *node;
				(*node)->next = tmp_node->next;
				tmp_node->prev = (*node)->prev;
				tmp_node->next = *node;
				(*node)->prev = tmp_node;
				swap = 1;
				print_list(*list);
			}
		*node = (*node)->next;
		}
	}
}
