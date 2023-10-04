#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer.
 * @str: string
 *
 * Return: pointer (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *pointer;
	unsigned int i, size;

	i = 0;
	size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	pointer = malloc(sizeof(char) * (size + 1));

	if (pointer == NULL)
		return (NULL);

	while ((pointer[i] = str[i]) != '\0')
		i++;

	return (pointer);
}
