#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: array's numb of elts
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	char temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
