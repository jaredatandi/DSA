#include <stdio.h>

/**
 * main - writes odd numbers to one file and even numbers to another
 * Return: 0 success
 */

int main(void)
{
	FILE *odd, *even;
	size_t n = 200;
	size_t k = 0;

	even = fopen("even.txt", "w");
	odd = fopen("odd.txt", "w");

	for (k = 0; k <= n; k++)
	{
		k % 2 == 0 ? 
			fprintf(even, "\t%5ld\n", k)
			: fprintf(odd, "\t%5ld\n", k);
	}

	fclose(even);
	fclose(odd);

	return (0);
}
