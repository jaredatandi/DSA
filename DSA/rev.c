#include <stdio.h>
#include <stdlib.h>

/**
 * main - reverses an array
 * Return: 0 success
 */

int main(void)
{
	int num, *arr, i, j;

	printf("Enter array size: ");
	scanf("%d", &num);

	arr = (int *) malloc(num * sizeof(int));

	for (i = 0; i < num; i++)
	{

		printf("Enter array member: ");
		scanf("%d", arr + i);
	}

	for (i = 0; i < num / 2; i++)
	{
		j = arr[i];
		arr[i] = arr[num - i - 1];
		arr[num - i - 1] = j;
	}

	for (i = 0; i < num; i++)
		printf("%d ", *(arr + i));
	printf("\n");

	return (0);
}

