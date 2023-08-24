#include "main.h"
/**
 * _strcat - that concatenates two strings.
 * @dest: first pointer
 * @src: second pointer
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *end = dest;
while (*end != '\0')
{
end++;
}
while (*src != '\0')
{
*end = *src;
end++;
src++;
}
*end = '\0';
return (dest);
}
