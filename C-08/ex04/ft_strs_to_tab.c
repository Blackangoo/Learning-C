#include <stdlib.h>
#include "ft_stock_str.h"

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

char *ft_strdup(char *src)
{
    char *copy;
    int i_src;
    int i_copy;

    i_src = 0;
    i_copy = 0;
    while (src[i_src])
        i_src++;
    copy = (char *) malloc((i_src + 1) * sizeof(char));
    if (!copy)
        return("NULL");
    while (src[i_copy])
    {
        copy[i_copy] = src[i_copy];
        i_copy++;
    }
    copy[i_copy] = '\0';
    return(copy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *stock;

    i = 0;
    stock = malloc(sizeof(t_stock_str) * (ac + 1));
    if (!stock)
        return(NULL);
    while (i < ac)
    {
        stock[i].size = ft_strlen(av[i]);
        stock[i].str = av[i];
        stock[i].copy = ft_strdup(av[i]);
        i++;
    }
    stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}