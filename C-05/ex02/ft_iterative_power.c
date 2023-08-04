#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int count;
    int res;

    count = 1;
    res = 1;
    if (power < 0)
    {
        return(0);
    }
    while (count <= power)
    {
        res = res * nb;
        count++;
    }
    return(res);
}
/*
int main(void)
{
    printf("%d \n", ft_iterative_power(0,0));
}*/