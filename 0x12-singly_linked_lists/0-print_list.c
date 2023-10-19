#include "lists.h"
/**
 *  print_list - print all element of list
 *  @h: parameter
 *
 *  Return: count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s [%u]\n", h->str, h->len);
		}
		h = h->next;
		count++;
	}
	return (count);
}
