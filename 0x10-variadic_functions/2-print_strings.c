#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: parameter
 * @n: parameter
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *string;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, const char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", string);
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
