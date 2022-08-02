#include <stdio.h>

/**
 * power - calculates the power of a number
 * @m: the base
 * @n: power
 * Return: return power of a number
 */

int power(int m, int n)
{
	if (n == 0)
		return (1);
	else if (n % 2 == 0)
		return (power(m * m, n / 2));
	return (m * power(m * m, (n - 1) / 2));
}

