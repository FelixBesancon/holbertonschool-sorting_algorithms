#include "sort.h"

/**
 * lotumo_rec - sorts recursively an array of integers in
 * ascending order using the Quick sort algorithm and Lomuto
 * partition scheme.
 * @array: The array of integers to sort.
 * @low: The lowest value from which the sort starts.
 * @high: The highest value to which the sort ends.
 * @size: the size of the array.
 *
 * Return: Void.
 */
void lotumo_rec(int *array, size_t low, size_t high, size_t size)
{
	size_t index_swap, last_low = low, index_pivot = high;
	int swap;

	if (low >= high)
		return;
	for (index_swap = low; index_swap < index_pivot; index_swap++)
	{
		if (array[index_swap] < array[index_pivot])
		{
			if (index_swap != last_low)
			{
				swap = array[index_swap];
				array[index_swap] = array[last_low];
				array[last_low] = swap;
				print_array(array, size);
			}
			last_low++;
		}
	}
	if (index_pivot != last_low)
	{
		swap = array[index_pivot];
		array[index_pivot] = array[last_low];
		array[last_low] = swap;
		print_array(array, size);
	}
	index_pivot = last_low;
	if (index_pivot > 0)
		lotumo_rec(array, low, index_pivot - 1, size);
	lotumo_rec(array, index_pivot + 1, high, size);
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm and Lomuto partition scheme.
 * @array: The array of integers to sort.
 * @size: the size of the array.
 *
 * Return: Void.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lotumo_rec(array, 0, size - 1, size);
}
