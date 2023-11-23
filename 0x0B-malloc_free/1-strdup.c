#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: string to duplicate
 * Return: pointer to the copied string
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	copy = malloc(sizeof(char) * (size + 1));
	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	return (copy);
	free(copy);
}
