#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that multiplies inputed numbers
 * @argc: arguments counted for main
 * @argv: element
 * Return: void (empty)
 */

int main(int argc, char *argv[])
{
	int multiplier = 0;

	if (argc == 3)
	{
		multiplier = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiplier);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
