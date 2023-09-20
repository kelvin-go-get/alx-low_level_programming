#include "main.h"

/**
 * leet - Encode a string into "1337".
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aeotlAEOTL";
	char *leet_replacements = "4307103701";

	while (*ptr)
	{
	char *temp_leet_chars = leet_chars;
	char *temp_leet_replacements = leet_replacements;
	int i = 0;

	while (*temp_leet_chars)
	{
	if (*ptr == *temp_leet_chars)
	{
	*ptr = temp_leet_replacements[i];
	break;
	}
	temp_leet_chars++;
	temp_leet_replacements++;
	i++;
	}
	ptr++;
	}
	return (str);
}
