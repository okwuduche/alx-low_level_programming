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
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
