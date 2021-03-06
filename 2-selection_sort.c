#include "sort.h"

/**
 * swap - all arg to the sorting
 * @p: swap h temp
 * @h: swap p temp
 */

void swap(int *h, int *p)
{
	int temp;

	temp = *h;
	*h = *p;
	*p = temp;
}
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;
		if (min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}

}
