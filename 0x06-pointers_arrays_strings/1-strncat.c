#include "main.h"
/**
 * _strncat - concatenates two strings with some conditions
 * @dest: first string
 * @src: second string
 * @n: the max of bytes to add from src
 *
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; i < n; i++)
		dest[len + i] = src[i];
	dest[len + n] = '\0';
	return (dest);
}
