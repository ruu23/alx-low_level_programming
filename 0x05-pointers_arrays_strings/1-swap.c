#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a:first p
 * @b:second p
 * Return: no return
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
