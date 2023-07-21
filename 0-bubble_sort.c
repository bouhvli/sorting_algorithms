#include <stdio.h>
#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm.
 * @array: the list we want to sort.
 * @size: the size of the list.
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx;
	int ch;
	bool changed = true;

	while (changed)
	{
		changed = false;
		for (idx = 0; idx < size; idx++)
		{
			if (array[idx - 1] > array[idx])
			{
				ch = array[idx - 1];
				array[idx - 1] = array[idx];
				array[idx] = ch;
				changed = true;
				print_array(array, size);
			}
		}
	}
}

