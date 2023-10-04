#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: unsigned int.
 * @c: char.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr = (char *)malloc(size * sizeof(char));

	if (arr == 0)
	{
		return (NULL);
	}
	for (unsigned int i; i <= size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
