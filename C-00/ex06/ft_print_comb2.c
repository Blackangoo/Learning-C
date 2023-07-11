#include <unistd.h>

void ft_print_comb2(void)
{
    int a = 48;
    while (a < 58)
    {
        int b = 48;
        while (b < 58)
        {
            int c = 48;
            while (c < 58)
            {
                int d = c+1;
                while (d < 58)
                {
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, " ", 1);
                    write(1, &c, 1);
                    write(1, &d, 1);
                    write(1, ", ", 2);
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb2();
}