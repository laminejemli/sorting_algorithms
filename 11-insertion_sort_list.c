#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm.
 * @list: linked list to sort.
 * Return: nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux1 = NULL, *aux2 = NULL, *a = NULL, *b = NULL, *head;
	if (!list || !(*list) || !(*list)->next)
		return;
	head = *list;
	while (head)
	{
		a = head;
		b = a->prev;
		while (b && b->n > a->n)
		{
			aux1 = a->prev;
			aux2 = b->next;
			b->next = a->next;
			a->prev = b->prev;
			b->prev = a;
			a->prev = b;
			if (aux1)
				aux1->next = a;
			if (aux2)
				aux2->prev = b;
			if (!a->prev)
				*list = a;
			b = a->prev;
		print_list(*list);
		}
		head = head->next;
	}
}
