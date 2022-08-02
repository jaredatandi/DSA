#include <stdio.h>

/**
 * main - prints whatever I give it
 * Return: void
 *
 */
int main()
{
	int n;
	float p;
	short a;

	printf("the size of int is: %ld\n", sizeof(n));

	printf("the size of float is: %ld\n", sizeof(p));
	printf("the size of short is: %ld\n", sizeof(a));

	return(0);
}
