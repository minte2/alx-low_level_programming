#include "main.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int j;
	int len = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		len++;
	}
	return (len);
}
