#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * quick_sort - will call the quick that will sort the array using the
 * Quiq sort algo.
 * @array: the list.
 * @size: the size of the list.
 */
void quick_sort(int *array, size_t size)
{
	int lo = 0, hi = size - 1;

	if (array == NULL || size == 0)
		return;
	quick(array, lo, hi, size);
}
/**
 * quick - Sorts a (portion of an) array, divides it into partitions,
 * then sorts those
 * @array: the list.
 * @lo: lowest element.
 * @hi: the element at the end.
 * @size: the size of the list.
 */
void quick(int *array, int lo, int hi, size_t size)
{
	int pivot;

	if (lo < hi)
	{
		pivot = lomuto_partition(array, lo, hi, size);
		quick(array, lo, pivot - 1, size);
		quick(array, pivot + 1, hi, size);
	}
}
/**
 * lomuto_partition - a function that Divides array into two partitions.
 * @array: the list.
 * @lo: lowest element.
 * @hi: the element at the end.
 * @size: the size of the list.
 * Return: the pivot index.
 */
int lomuto_partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo - 1;
	int j, ch;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				ch = array[i];
				array[i] = array[j];
				array[j] = ch;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hi])
	{
		ch = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = ch;
		print_array(array, size);
	}
	return (i + 1);
}
