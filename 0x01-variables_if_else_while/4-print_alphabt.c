#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	if (letter == 'q')
		continue;
	else if (letter == 'e')
		continue;
	else
		putchar(letter);
}
putchar('\n');
return (0);
}
