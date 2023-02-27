#include <stdio.h>

/**
 * swap_int - Swaps the values of two intigers.
 * @a: The first imtiger to bev swaped.
 * @b: The second imtiger to bev swaped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
	/* the function of two intigers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
