#include "ft_stock_str.h"
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
		write(1, "-2147483648", 11);
    }
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str != 0)
    {
        ft_putstr(par[i].str);
        i++;
    }
}