#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *separator = "";
	char *str;
	va_list args;

	va_start(args, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s%s", separator, str);
				}
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
