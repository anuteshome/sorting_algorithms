#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
  * bubble_sort - sorts an array of integers in ascending order
  * @array: array to be sorted
  * @size: size of array
  *
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, swap = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap++;
				print_array(array, size);
			}
		}
		/* If no swapping is done the array is sorted, so no need to loop again */
		if (swap == 0)
			break;
	}
}
