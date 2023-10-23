#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - bubble sort an array
 * @array: arr to sort
 * @size: arr size
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
