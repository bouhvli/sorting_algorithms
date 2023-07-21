#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list -  a function that sorts a doubly linked
 * list of integers in ascending order using the Insertion sort algorithm
 * @list: the list to insert.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *tmp = NULL, *prev = NULL;

	if (!list || !*list || !(*list)->next)
		return;
	current = (*list)->next;
	while (current)
	{
		tmp = current->next;
		prev = current->prev;
		while (prev && prev->n > current->n)
		{
			prev->next = current->next;
			if (current->next)
				current->next->prev = prev;
			current->prev = prev->prev;
			if (prev->prev)
				prev->prev->next = current;
			else
				*list = current;
			prev->prev = current;
			current->next = prev;
			prev = current->prev;
			print_list(*list);
		}
		current = tmp;
	}
}
