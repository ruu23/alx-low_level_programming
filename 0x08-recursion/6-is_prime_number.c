#include "main.h"

int check_prime(int n, int x);

/**
 * is_prime_number - if an integer is a prime number or not
 * @n: int
 * Return: 1, 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - calculates if a number is prime recursively
 * @n: int
 * @x: int
 * Return: 1, 0
 */
int check_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (check_prime(n, x - 1));
}
