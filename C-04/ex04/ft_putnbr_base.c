#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

int ft_check_base(char *base)
{
    int i;
    int z;

    i = 0;
    z = 0;
    if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
        return(0);
    while (base[i])
    {   
        z = i + 1;
        if (base[i] == 43 || base[i] == 45)
            return(0);
        while (base[z])
        {
            if (base[z] == base[i])
                return(0);
            z++;
        }
        i++;
    }
    return(1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_size;
    int nb[100];
    int i;
    i = 0;
    base_size = ft_strlen(base);
    if (ft_check_base(base))
    {
        if (nbr < 0)
        {
            nbr = -nbr;
            ft_putchar('-');
        }
        while (nbr)
        {
            nb[i] = nbr % base_size;
            nbr = nbr / base_size;
            i++;
        }
        while (--i >= 0)
        {
            ft_putchar(base[nb[i]]);
        }
    }
}

int main(void)
{
    char base[] = "0123456789ABCDEF";
    int nbr = 32;
    ft_putnbr_base(nbr, base);
}