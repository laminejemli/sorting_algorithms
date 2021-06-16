#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm.
 * @list: linked list to sort.
 * Return: nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux1 = NULL, *aux2 = NULL, *a = NULL, *b = NULL, *head, *prev;
	int c;
	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
	{
	        return;
	}
	head = *list;
	while (head)
	{
		prev = head->prev;
		                c = head->n;
		while (prev && prev->n > c)
		{
			aux1 = a->prev;
			aux2 = b->next;
			if (aux1)
				aux1->next = b;
			if (aux2)
				aux2->prev = a;
			a->next = aux2;
			a->prev = b;
			b->next = a;
			b->prev = aux1;
			if (aux1 == NULL)
				*head = b;
			print_list(*list);
			prev = head->prev;
		}
		head = head->next;
	}
}
