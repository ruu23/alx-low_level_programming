#include "main.h"
/**
 * read_textfile - reads a text file and prints it.
 * @filename: const char
 * @letters: size_t
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *array;

	if (filename == NULL)
		return (0);

	array = malloc(sizeof(char) * letters);
	if (array == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, array, letters);
	w = write(STDOUT_FILENO, array, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(array);
		return (0);
	}

	free(array);
	close(o);

	return (w);
}
