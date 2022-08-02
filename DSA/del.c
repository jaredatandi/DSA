#include <stdio.h>

/**
 * main - prints array after deleting element
 * Return: 0 success
 */
int main(void)
{
	int size = 10;
	int arr[10];
	int i, index, x;
	x = 0;

	index = 5;

	for (i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}

	x = arr[index];

	for (i = index; i < size - 1; i++)
		arr[i] = arr[i + 1];

	size--;

	printf("[");
	for (i = 0; i < size; i++)
		printf("%d", arr[i]);
	printf("]");
	printf("\nYou deleted %d\n", x);

	return (0);
}
