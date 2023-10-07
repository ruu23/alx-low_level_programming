#include <stdio.h>
/**
 * main - function
 * @argc: int
 * @argv: char
 *
 * Return: 0 alwayes (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i \n", argc - 1);
	return (0);
}
