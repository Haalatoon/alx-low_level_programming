#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return:  the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, ln1 = 0, ln2 = 0;

	while (dest[ln1] != '\0')
		ln1++;
	while (src[ln2] != '\0')
		ln2++;
	for (i = 0; i < ln2; i++)
		dest[ln1 + i] = src[i];
	dest[ln1 + ln2] = '\0';
	return (dest);
}
