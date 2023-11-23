#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize with
 *
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size > 0)
	{
		ar = malloc(size * sizeof(*ar));
		for (i = 0; i < size; i++)
			ar[i] = c;
		return (ar);
	}
	else
		return (NULL);
	free(ar);
}
