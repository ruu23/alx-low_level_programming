#include "main.h"

int check_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt_recursion(n, 0));
}

/**
 * check_sqrt_recursion - recurses to find sqrt
 * @n: int
 * @x: int
 * Return: sqrt
 */
int check_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (check_sqrt_recursion(n, x + 1));
}
