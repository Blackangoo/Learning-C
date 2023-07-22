#include <stdio.h>

int ft_clean_nb(int nb, int count)
{
    if (nb >= 2147483647)
    {
        nb = 2147483647;
    }
    if (count % 2 == 1)
    {
        nb = -nb;
    }
    return(nb);
    
}

int ft_atoi(char *str)
{
    int i_str = 0;
    int count = 0;
    int nb = 0;

    while (((str[i_str] >= 9 && str[i_str] <= 13) || (str[i_str] == 32)) || (str[i_str] == '+' || str[i_str] == '-'))
    {
        if (str[i_str] == '-')
        {
            count++;
        }
        i_str++;
    }
    while (str[i_str] >= '0' && str[i_str] <= '9')
    {
        nb = nb * 10 + (str[i_str] - '0');
        i_str++;
    }
    return(ft_clean_nb(nb, count));
}

int	main()
{
	char *str;

	str = "\t \n  ---+--+1234ab567";
	printf("%d \n", ft_atoi(str));
}