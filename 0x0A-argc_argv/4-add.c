#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - function.
  * @argc: number of argument.
  * @argv: array of argument.
  * Return: 0 always
  */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
