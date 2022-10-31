#include "main.h"

/**
* _strspn - Calculating lenght of prefix
* @s: For strings
* @accept: Another string
* Return: REturns the strings
*/

unsigned in _strspn(char *s, char *accept)

{
	unsigned in position, looper, tracker = 0;

	for (position = 0, s[position] != '\0'; looper++)
	{
		for (looper = 0; accept[looper] != '\0'; looper++)
			{
				tracker = tracker + 1;
				break;
			}

		if (accept[looper] != s[position])
		{
		break;
		}
	}

	return (tracker);
}
