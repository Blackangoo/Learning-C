#include <unistd.h>

void ft_result(int a, int b, int c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (! (a == '7' && b == '8' && c == '9'))
    {
        write(1, ", ", 2);
    }
    
}

void ft_print_comb(void)
{
    int a = 48;
    while (a < 58)
    {
        int b = a + 1;
        while (b < 58)
        {
            int c = b + 1;
            while (c < 58)
            {
                ft_result(a,b,c);
                c++;
            }
            b++;
        }
        a++;
    }
}
/*
int main()
{
    ft_print_comb();
}*/