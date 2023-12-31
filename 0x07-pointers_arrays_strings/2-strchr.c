#include "main.h"
/**
 * _strchr - locating a character in a string,
 * @s: string.
 * @c: character.
 * Return: pointer to the first occurrence of the c character.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
