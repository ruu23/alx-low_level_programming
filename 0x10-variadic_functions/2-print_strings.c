#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: char *
 * @n: int
 *
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *name;
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		name = va_arg(args, const char *);
		printf("%s", name);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		else
		{
			printf("(nail)");
		}
	}
	va_end(args);
	printf("\n");
}
