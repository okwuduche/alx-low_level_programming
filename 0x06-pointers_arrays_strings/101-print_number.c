#include <stdio.h>
#include "main.h"

/**
* print_number - To print an integer
* @n: Set or list of integers to be printed
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
