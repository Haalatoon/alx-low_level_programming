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
	int len1 = 0, len2 = 0, i;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	if (len2 >= n)
	{
		for (i = 0; i < n; i++)
			dest[len1 + i] = src[i];
	dest[len1 + n] = '\0';
	}
	else
	{
		for (i = 0; i < len2; i++)
			dest[len1 + i] = src[i];
		dest[len1 + len2] = '\0';
	}
	return (dest);
}
