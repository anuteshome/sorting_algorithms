#include "sort.h"
#include <stdio.h>

/**
  * selection_sort - sorts an array of integers in ascending order using
  * selection sort algorithm
  * @array: contains a list of integers
  * @size: the size of the array
  *
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/* suppose the first index contains the minimal number */
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}

