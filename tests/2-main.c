#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {13, 4, 17, 20, 25, 14, 15, 23, 9, 16, 26, 6, 5, 10, 3, 2, 27, 28, 19, 8, 21, 11, 24, 30, 18, 7, 29, 1, 12, 22};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
