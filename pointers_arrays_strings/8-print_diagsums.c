#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the matrix (number of rows or columns).
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int iteration;
	int sum_1;
	int sum_2;

	sum_1 = 0;
	sum_2 = 0;

	for (iteration = 0; iteration < size; iteration++)
	{
		sum_1 += a[iteration * size + iteration];
		sum_2 += a[iteration * size + (size - 1 - iteration)];
	}
	printf("%d, %d",  sum_1, sum_2);
	printf("\n");
}
