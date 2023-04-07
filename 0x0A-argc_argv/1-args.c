#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%n\n", argc - 1);

	return (0);
}
