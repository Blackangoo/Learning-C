#include <unistd.h>

void ft_putchar(char value)
{
	write(1, &value, 1);
}

void ft_print_combn(int n)
{
    if (n > 0)
    {
        0;
        ft_print_combn(n - 1);
    }
    
}

int main()
{
    ft_print_combn(2);
}