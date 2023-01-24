#include "sort.h"

/**
 * main - Entry point
 *
 * Return: 0 Always
 */

int main(void)
{
	int array[0];
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}