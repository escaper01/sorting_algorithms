#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - selection sort an array
 * @array: arr to sort
 * @size: arr size
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int j = 0;
	size_t i;
	int tmp;

	while (j < size - 1)
	{
		int last_min = array[j];
		int last_index = j;

		for (i = j + 1; i < size; i++)
		{
			if (array[i] < last_min)
			{
				last_min = array[i];
				last_index = i;
			}
		}

		tmp = array[j];
		array[j] = array[last_index];
		array[last_index] = tmp;
		print_array(array, size);

		j++;
	}
}
