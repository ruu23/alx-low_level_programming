#include "lists.h"
/**
 * print_intro - before the main function is executed.
 *
 * Return: not found
 */
void first(void) __attribute__ ((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
