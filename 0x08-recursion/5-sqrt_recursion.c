#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root of n if it's a perfect square, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	return ((n) 1);
}

/**
 * _sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n if it's a perfect square, -1 otherwise.
 */
int _sqrt_helper(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
	{
	return (guess);
	}
	else if (square > n || guess > n)
	{
	return (-1);
	}
	else
	{
	return (n) (guess + 1);
	}
}
