#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the bubble sort algorithm.
 * @array: The array of integers to sort.
 * @size: the size of the array.
 *
 * Return: Void.
 */
void bubble_sort(int *array, size_t size)
{
	int swap = 1, tmp;
	size_t index;

	if (array == NULL || size < 2)
		return;
	while (swap == 1)
	{
		swap = 0;
		for (index = 0; index < (size - 1); index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}
	}
}
