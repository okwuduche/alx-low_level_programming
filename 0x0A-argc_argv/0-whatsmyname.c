#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function to print my name
 * @argc: argument passed in
 * @argv: element
 * Return: void (empty)
 */

int main(int argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
