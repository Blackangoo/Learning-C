#include <unistd.h>

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
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                write(1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb();
}