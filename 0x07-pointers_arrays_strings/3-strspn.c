#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string containing characters to search for
 *
 * Return: the number of bytes in the initial segment of `s`
 * which consist only of bytes from `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
	match = 0;
	while (*accept)
	{
	if (*s == *accept)
	{
	count++;
	match = 1;
	break;
	}
	accept++;
	}
	if (!match)
	break;
	s++;
	accept -= count;
	}
	return (count);
}
