#include "lists.h"
/**
 * free_list - free the list
 * @head: the head
 *
 * Return: no
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
