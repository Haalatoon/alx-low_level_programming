#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j = 0;

	while (dest[j] != '\0')
		j++;
	for (i = 0; i < n; i++)
	{
		dest[j + 1] = src[i];
		j++;
	}
	dest[j + 1] = '\0';
	return (dest);
}
