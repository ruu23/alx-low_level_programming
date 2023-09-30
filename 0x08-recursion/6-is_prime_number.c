#include "main.h"
int check(int x, int y);
/**
 * is_prime_number - if the input integer is a prime number
 * @n: int
 * Return: 1, 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
		return (check(2, n));
	}
}
/**
 * check - checks to see if number is prime
 * @x:int
 * @y:int
 * Return:int
 */
int check(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (check(x + 1, y));
	}
}
