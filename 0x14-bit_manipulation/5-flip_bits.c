#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another.
 * @n: unsigned long int
 * @index: unsigned long int
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
