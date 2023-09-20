#include "main.h"
#include <stdio.h>

/**
 * leet - Encode a string into "1337".
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";

	while (*ptr)
	{
	char *leet_ptr = leet_chars;
	char *replacement_ptr = leet_replacements;
	int match = 0;

	while (*leet_ptr)
	{
	if (*ptr == *leet_ptr)
	{
	*ptr = *replacement_ptr;
	match = 1;
	break;
	}
	leet_ptr++;
	replacement_ptr++;
	}
	if (!match)
	{
	ptr++;
	}
	}
	return (str);
}
