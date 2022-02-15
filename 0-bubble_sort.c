#include "sort.h"
/**
 * bubble_sort - sort the int array
 * @array:array of integers of size
 * @size:size of the array
 */
void bubble_sort(int *array, size_t size)
{
	/*declarations*/
	int temp;
	size_t i, z;

	/* check both array & size*/
	if (!(array && size))
		return;

	/*The sort*/
	for (i = 0; i < size;)
	{
		for (z = 0; z < size - 1; z++)
		{
			if (array[z] > array[z + 1])
			{
				temp = array[z];
				array[z] = array[z + 1];
				array[z + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
