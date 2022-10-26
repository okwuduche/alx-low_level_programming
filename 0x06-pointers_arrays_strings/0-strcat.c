#include <stdio.h>
#include "main.h"

/**
* _strcat - Contcatnates (i.e combines) strings
* @dest: Points to the destination
* @src: Source document
* Return: Returns the passed in details
*/

char *_strcat(char *dest, char *src)

{
	int position = 0, dest_len = 0;

	while (dest[position = position + 1])
	{
		dest_len++;
	}

	for (position = 0; src[position]; position++)
	{
		dest[dest_len++] = src[position];
	}

	return (dest);
}
