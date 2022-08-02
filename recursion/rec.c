#include <stdio.h>

int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d\n", nb + print(nb - 1));
    nb --;
    return (nb);
}

int main(void)
{
	int c;
	c = print(4);

    print(4);
    printf("%d\n", (c));
    return (0);
}
