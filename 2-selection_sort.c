#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort -  a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: the array of number to sort.
 * @size: the size of the list.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, ch;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			ch = array[i];
			array[i] = array[min];
			array[min] = ch;
			print_array(array, size);
		}
	}
}
