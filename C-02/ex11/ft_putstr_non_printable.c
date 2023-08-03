#include <unistd.h>

void ft_putchar(char value)
{
    write(1, &value, 1);
}

void ft_base16(int nb, int count)
{
    char *alpha;
    alpha = "0123456789abcdef";
	if (nb > 15)
	{
        count++;
		ft_base16(nb / 16, count);
		ft_base16(nb % 16, count);
	}
	else
    {
        if (count == 0)
        {
            ft_putchar('0');
        }
		ft_putchar(alpha[nb]);
    }
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            ft_putchar(str[i]);
        }
        else
        {
            ft_putchar(92);
            ft_base16(str[i],0);
        }
        
        i++;
    }
    
}
/*
int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    ft_putchar('\n');
}*/