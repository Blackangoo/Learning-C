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
    ft_putchar('\n');
}

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while ((s1[i] || s2[i]) && (s1[i]==s2[i]))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main(int argc, char *argv[])
{
    char *temp;
    int i;
    int found;

    found = 1;
    while (found)
    {
        found = 0;
        i = 0;
        while (++i < argc - 1)
        {
            if (ft_strcmp(argv[i], argv[i + 1]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = temp;
                found = 1;
            }
        }
    }
    i = 0;
    while (++i < argc)
        ft_putstr(argv[i]);
}