#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: The array of integers to sort.
 * @size: the size of the array.
 *
 * Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	size_t index, index_2, index_min;
	int tmp;

	if (array == NULL || size < 2)
		return;
	for (index = 0 ; index < size - 1; index++)
	{
		index_min = index;
		for (index_2 = index + 1; index_2 < size; index_2++)
		{
			if (array[index_2] < array[index_min])
				index_min = index_2;
		}
		if (array[index_min] < array[index])
		{
			tmp = array[index_min];
			array[index_min] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
