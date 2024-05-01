#include "sort.h"

/**
 * bubble_sort - Sort array using bubble_sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, k;

	k = 0;
	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - 1 - k; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		++k;
		print_array(array, size);
	}
}
