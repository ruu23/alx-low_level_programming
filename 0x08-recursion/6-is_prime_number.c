#include <stdio.h>
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: parameter
 * Return: 1,0
 */
/**
 * is_divisible_by - function
 * @n: 1
 * @divisor: 2
 * Return: 0
 */
int is_divisible_by(int n, int divisor)
{
if (divisor == 1)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_divisible_by(n, divisor - 1));
}

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (is_divisible_by(n, n - 1));
}
