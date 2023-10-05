#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string.
 *         If memory allocation fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;
	concatenated = malloc((len1 + n + 1) * sizeof(char));
	if (concatenated == NULL)
	return (NULL);
	for (i = 0; i < len1; i++)
	concatenated[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	concatenated[i++] = s2[j]
	concatenated[i] = '\0';
	return (concatenated);
}
