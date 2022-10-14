#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry
* Return: Always
*/

int main(void)

{
	int n;
		srand(time(0));
			n = rand() - RAND_MAX / 2;
				printf("%i %i %i is positive", n);
				return (0);
}
