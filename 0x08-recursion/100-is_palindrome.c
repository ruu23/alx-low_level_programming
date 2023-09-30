#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * check_palindrome - check palindrome
 * @s: parameter
 * @left: int
 * @right: int
 * Return: 0, 1
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function
 * @s: parameter
 * Return: 0, 1
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, length - 1));

}
