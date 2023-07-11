#include <unistd.h>

void ft_putchar(char c) /*My first function lol*/
{
    write(1, &c, 1);
}

int main(){
    ft_putchar('x');
    ft_putchar('\n');
}