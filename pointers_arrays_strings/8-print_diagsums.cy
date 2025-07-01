
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
	int line;
	int col;
	int sum_1;
	int sum_2;
	sum_1 = 0;
	sum_2 = 0;

	for (line = 0; line < size; line++)
	{
		for (col = 0; col <= line; col++)
		{
			sum_1 = a[line * col];
		}
	for (; line > size; line--)
	{
		for (; col > size; col--)
		{
			sum_2 = a[line * col];
		}
	}
	printf("\n");
}
