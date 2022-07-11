#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, j, i;
	char v, u;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		v = s[i];
		u = s[j];
		s[i] = u;
		s[j] = v;
		j--;
		i++;
	}
}
