#include <unistd.h>

void ft_putchar(char value)
{
	write(1, &value, 1);
}

void print_from_n(int n)
{
    while (n < 10)
    {
        ft_putchar(n + '0');
        n++;
    }
    
}

void ft_print_combn(int n)
{
    if (0 < n)
    {
        ft_print_combn(n - 1);
        print_from_n(n);
    }
}

int main()
{
    ft_print_combn(2);
}