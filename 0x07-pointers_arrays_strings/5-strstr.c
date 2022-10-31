#include <stdio.h>

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
		char *placeholder;

		placeholder = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (placeholder);
		haystack++;
	}
	return (0);
}
