#include "sort.h"

/**
 * swap all arg
 * swap array
 */

void swap(int *h, int *p)
{
	int temp;
	temp = *h;
	*h = *p;
	*p = temp;
}
