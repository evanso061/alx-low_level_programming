#include "main.h"
/**
 * _memset - using a constant byte to fill a memory,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
