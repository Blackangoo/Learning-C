#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}
/*
int main(void)
{
    char str[] = "Bonjour test test";

    printf("%d \n", ft_strlen(str));

    return(0);
}*/