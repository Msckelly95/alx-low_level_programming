#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
