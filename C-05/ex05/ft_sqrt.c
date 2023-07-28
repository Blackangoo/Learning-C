#include <stdio.h>

int sqr(int nb, int x)
{
    if (x > nb / 2)
    {
        return(0);
    }
    else if (nb / x == x)
    {
        return(x);
    }
    sqr(nb, x + 1);
}

int ft_sqrt(int nb)
{
    return(sqr(nb, 1));
}

int main(void)
{
    printf("%d \n", ft_sqrt(24));
}