#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter
 * @val: sqrt
 * Return: -1, else
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - sqrt of number
 * @n: parameter
 * @val: sqrt
 * Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
