#include "main.h"

/**
 * _strcat - Concatenates 2  strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		destLen++;

	while (src[srcLen])
	{
		dest[destLen] = src[srcLen];
		srcLen++;
		destLen++;
	}
	dest[destLen] = '\0';

	return (dest);
}
