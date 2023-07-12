#include <unistd.h>

void ft_putchar(char value)
{
	write(1, &value, 1);
}

void ft_write(int x)
{
    int dizaine;
    int unite;
    if (x > 9)
    {
        dizaine = x / 10;
        unite = x % 10;
    }
    else 
    {
        dizaine = 0;
        unite = x;
    }
    ft_putchar('0' + dizaine);
    ft_putchar('0' + unite);
}

void ft_print(int x, int y)
{
    ft_write(x);
    ft_putchar(' ');
    ft_write(y);
    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb2(void)
{
    int x = 0;
    while (x < 99)
    {
        int y = x + 1;
        while (y < 100)
        {
            ft_print(x,y);
            y++;
        }
        x++;
    }
}

int main()
{
    ft_print_comb2();
}