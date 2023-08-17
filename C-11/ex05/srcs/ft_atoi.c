#include "../includes/do_op.h"

int ft_signe(char *str)
{
    int i_str = 0;
    int neg = 0;

    while ((str[i_str] >= 9 && str[i_str] <= 13) || (str[i_str] == 32))
    {
        i_str++;
    }
    while ((str[i_str] == '+' || str[i_str] == '-'))
    {
        if (str[i_str] == '-')
            neg++;
        i_str++;
    }
    if (neg % 2)
        return(-1);
    return(1);
    
}

int ft_atoi(char *str)
{
    int i_str;
    int nb;

    i_str = 0;
    nb = 0;
    while ((str[i_str] >= 9 && str[i_str] <= 13) || (str[i_str] == 32))
        i_str++;
    while ((str[i_str] == '+' || str[i_str] == '-'))
        i_str++;
    while (str[i_str] >= '0' && str[i_str] <= '9')
    {
        nb = nb * 10 + (str[i_str] - '0');
        i_str++;
    }
    if (nb >= 2147483647)
    {
        nb = 2147483647;
        return(nb * ft_signe(str));
    }
    return(nb * ft_signe(str));
}