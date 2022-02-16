#include "sort.h"
/**
 * selection_sort - sort array of size with selection sorting
 * @array: int array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
        size_t a, b, d;
        int temp;

        if (!(array && size))
                return;
        for (a = 0; a < size - 1; a++)
        {
                for (b = size - 1, d = a + 1; b > a; b--)
                {
                        if (array[b] < array[d])
                                d = b;
                }

                if (array[a] > array[d])
                {
                        temp = array[a];
                        array[a] = array[d];
                        array[d] = temp;
                        print_array(array, size);
                }
        }
}
