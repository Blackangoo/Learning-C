#include <stdlib.h>

int ft_check_base_len(char *base);
int ft_signe(char *str);
int ft_is_in_base(char c, char *base);
int ft_get_int_in_base(char c, char *base);
int ft_atoi_base(char *str, char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    char *result;
    int number;
    int i;

    number = ft_atoi_base(nbr, base_from);
}