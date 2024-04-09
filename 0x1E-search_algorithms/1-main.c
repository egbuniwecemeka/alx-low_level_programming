#include "search_algos"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};

	size_t size = sizeof(array) / sizeof([0]);

	printf("Found [%d] at index: [%d]", 2, binary_search(array, size, 2));
	printf("Found [%d] at index: [%d]", 5, binary_search(array, 5, 5));
	printf("Found [%d] at index: [%d]", 999, binary_search(array, size, 999));

	exit(EXIT_SUCCESS);
}
