#include "main.h"

/**
 * _strcpy - copies a string to the buffer
 * @dest: pointer to the buffer
 * @src: string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (*src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[l] = '\0';
	return (dest);
}
