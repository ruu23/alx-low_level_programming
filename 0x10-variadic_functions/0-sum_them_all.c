#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: int
* Return: sum or 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
}
