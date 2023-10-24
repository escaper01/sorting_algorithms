#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - insertion sort list
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (!list)
	{
		return;
	}

	current = (*list)->next;

	while (current != NULL)
	{
		listint_t *insertionPoint = current->prev;

		while (insertionPoint != NULL && current->n < insertionPoint->n)
		{

			if (current->next != NULL)
			{
				current->next->prev = insertionPoint;
			}
			if (insertionPoint->prev != NULL)
			{
				insertionPoint->prev->next = current;
			}
			else
			{
				*list = current;
			}
			current->prev = insertionPoint->prev;
			insertionPoint->next = current->next;
			current->next = insertionPoint;
			insertionPoint->prev = current;
			insertionPoint = current->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
