#include <stdio.h>
#include "main.h"
/**
 * _strstr - Function that locates substring
 * @haystack: Input
 * @needle: This helps to handle location issues
 * Return: returns a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (temp);
		haystack++;
	}
	return (0);
}
