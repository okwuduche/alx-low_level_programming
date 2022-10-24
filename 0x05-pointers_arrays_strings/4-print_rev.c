#include <stdio.h>
#include "main.h"

/**
* print_rev - Printing strings in reverse order
* @s: Strings that needs reversing
*/

void print_rev(char *s)

{
	int len = 0;
	i = 0;

	while (s[i++])
	{
		len++;
	}

	for (i = len -1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
