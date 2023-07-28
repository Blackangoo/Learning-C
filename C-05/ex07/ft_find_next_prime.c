#include <stdio.h>

int is_prime(int nb, int x)
{
    if (nb <= 2)
    {
        if (nb < 2)
            return(0);
        else
            return(1);
    }
    else if (nb % x == 0)
        return(0);
    else if (x > nb / 2)
        return(1);
    is_prime(nb, x + 1);
}

int ft_find_next_prime(int nb)
{
    if (is_prime(nb, 2) == 1)
        return(nb);
    ft_find_next_prime(nb + 1);
}

int main(void)
{
    printf("%d \n", ft_find_next_prime(123));
}