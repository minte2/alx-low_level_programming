#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
int n;
int lastn;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
if (lastn > 5)
	printf("Last of %d is %d and is greater than 5\n", lastn);
if (lastn == 0)
	printf("Last digit of %d is %d and is 0\n", lastn);
if (lastn != 0 && lastn < 6)
	printf("Last digit of %d is %d and is less than 5 and not 0\n", lastn);
return (0);
}
