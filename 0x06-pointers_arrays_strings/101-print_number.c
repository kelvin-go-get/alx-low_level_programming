#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * print_number - Prints an integer
 * @n: The integer to be printed.
 * Return: 0
 */
void print_number(int n)
{
	int _putchar(char c)

	if (n == 0)
	{
	_putchar('0');
	return;
	}
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	if (n / 10)
	{
	print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
