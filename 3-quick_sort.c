#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * quick_sort - sorts an array of integers in ascending order
 * using Quick sort algorithm
 * @array: an array of integers
 * @size: size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	int lb, ub;

	if (array == NULL || size < 2)
		return;

	lb = 0;
	ub = (int) (size - 1);
	quick_sort_recursion(array, lb, ub, size);
}

/**
 * quick_sort_recursion - a recursion function
 * @array: an array of integers
 * @size: size of the array
 * @lb: lower bound
 * @ub: upper bound
 *
 */
void quick_sort_recursion(int *array, int lb, int ub, size_t size)
{
	int pidx;

	if (lb < ub)
	{
		pidx = partition(array, lb, ub, size);
		quick_sort_recursion(array, lb, pidx - 1, size);
		quick_sort_recursion(array, pidx + 1, ub, size);
	}
}
/**
 * partition - divides array into sub parts
 * @array: an array of integers
 * @size: size of the array
 * @lb: lower bound
 * @ub: upper bound
 *
 * Return: pivot index
 */
int partition(int *array, int lb, int ub, size_t size)
{
	int pivot = array[ub];
	int i = lb, j, temp;

	for (j = lb; j < ub; j++)
	{
		if (array[j] <= pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
		}
	}
	temp = array[ub];
	array[ub] = array[i];
	array[i] = temp;
	print_array(array, size);

	return (i);
}
