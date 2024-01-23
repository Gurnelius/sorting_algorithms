#include "sort.h"

/**
 * selection_sort - sort array using selection sort
 * algorithm.
 *
 * @array: Integer array to be sorted.
 * @size: The size of the array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}
		if (index != i)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			/** Print array after sorting */
			print_array(array, size);
		}
	}
}
