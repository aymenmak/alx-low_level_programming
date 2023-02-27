#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers.
 * @a: the first intiger to be swapped.
 * @b: the second intiger to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
