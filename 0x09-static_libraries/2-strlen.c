#include "main.h"

/**
 *  _strlen - Returns the length of a string.
 * @str: The string to get the length of
 * Return: The length of @str.
 */
int _strlen(char *str)

{
	int len = 0;

	while (*(str + len) != '\0')
	len++;
	return (len);

}
