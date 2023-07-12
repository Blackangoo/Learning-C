#include <unistd.h>

void ft_putchar(char value) 
{
    write(1, &value, 1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
       ft_putchar(*(str + i));
       i++;
    }
    
}

int main()
{
    char *str = "Arthur";
    ft_putstr(str);
}