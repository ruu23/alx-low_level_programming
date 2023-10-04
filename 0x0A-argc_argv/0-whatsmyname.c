#include <stdio.h>
/**
 * main - function.
 * @argc: int.
 * @argv: char.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0])
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
