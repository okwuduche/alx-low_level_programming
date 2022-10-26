#include "main.h"
#include <stdio.h>

/**
* _strcmp - Compares given sets of strings
* @s1: Points to the 1st string
* @s2: Points to the second string
* Return: Returns according to the evaluation
*/

int _strcmp(char *a1, char a2)
{
	while (*a1 && *a2 && *a1 == *a2)
	{
		a1++;
		a2++;
	}

	return (*a1 - *a2);
}
