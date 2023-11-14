#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: parameter
 *
 * Return: The length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
