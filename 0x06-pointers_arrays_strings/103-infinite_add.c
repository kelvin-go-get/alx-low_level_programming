#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result can't be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, carry = 0, len1 = 0, len2 = 0, max_len, sum;

	while (n1[len1])
	len1++;
	while (n2[len2])
	len2++;
	if (len1 >= size_r || len2 >= size_r)
	return (0);
	i = len1 - 1;
	j = len2 - 1;
	max_len = (len1 > len2) ? len1 : len2;
	r[max_len + 1] = '\0';
	while (i >= 0 || j >= 0 || carry)
	{
	int digit1 = (i >= 0) ? n1[i] - '0' : 0;
	int digit2 = (j >= 0) ? n2[j] - '0' : 0;

	sum = digit1 + digit2 + carry;
	carry = sum / 10;
	r[max_len] = (sum % 10) + '0';
	i--;
	j--;
	max_len--;
	}
	return (r);
}
