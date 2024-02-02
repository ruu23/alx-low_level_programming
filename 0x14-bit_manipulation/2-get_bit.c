#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: index, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
