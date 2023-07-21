#include <stdio.h>
#include "sort.h"
#include <stdbool.h>
/**
 * change - will change the value of two ints
 * @v1: the first one.
 * @v2: the second one.
 */
void change(int *v1, int *v2)
{
	int ch = *v1;

	*v1 = *v2;
	*v2 = ch;
}
/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm.
 * @array: the list we want to sort.
 * @size: the size of the list.
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, ch = 0;

	if (array == NULL || size == 0)
		return;

	while (ch < size - 1)
	{
		for (idx = 0; idx < size; idx++)
		{
			if (array[idx - 1] > array[idx])
			{
				change(array + (idx - 1), array + idx);
				print_array(array, size);
			}
		}
		ch++;
	}
}

