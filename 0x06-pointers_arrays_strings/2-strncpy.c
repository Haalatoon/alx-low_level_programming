#include "main.h"
/**
 * _strncpy - at most n bytes of src are copied to dest
 * @src: string to copy from
 * @dest: string to copy to
 * @n: max number of bytes to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
