#include "main.h"

/**
* _strchr - Locating character in a given string
* @s: String from user
* @c: The character
* Return: Returns NULL if no character is found
*/

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
