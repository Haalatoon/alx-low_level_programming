#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First paramter
 * @b: Second parameter
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
