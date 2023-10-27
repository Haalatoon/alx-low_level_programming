#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'A'; c <= 'F'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
