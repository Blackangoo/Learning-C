#include <unistd.h>

void ft_putchar(char value)
{
	write(1, &value, 1);
}

void ft_number(int nb)
{
    int divisor;
    divisor = 1;
    while (nb > 0)
    {
        if (nb / divisor < 9)
        {
            int digit;
            digit = nb / divisor;
            ft_putchar('0' + digit);
            nb = nb - (digit * divisor);
            divisor = 1;
        }
        else
            divisor = divisor * 10;
    }
}

void ft_clean(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        ft_number(-nb);
    }
    else
    {
        ft_number(nb);
    }
}

int main()
{
    ft_clean(-7);
    ft_putchar('\n');
}