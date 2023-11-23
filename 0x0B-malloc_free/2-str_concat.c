#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string to concat
 * @s2: second string to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, sz1 = 0, sz2 = 0;
	char *cnc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[sz1] != '\0')
		sz1++;
	while (s2[sz2] != '\0')
		sz2++;
	cnc = malloc(sizeof(char) * (sz1 + sz2 + 1));
	if (cnc == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		cnc[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		cnc[i] = s2[j];
		i++;
	}
	cnc[i + 1] = '\0';
	return (cnc);
	free(cnc);
}
