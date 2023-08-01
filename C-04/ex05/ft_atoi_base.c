int ft_check_base_len(char *base)
{
    int base_len;
    int z;

    base_len = 0;
    z = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return(0);
    while (base[base_len])
    {   
        z = base_len + 1;
        if (base[base_len] == 43 || base[base_len] == 45)
            return(0);
        while (base[z])
        {
            if (base[z] == base[base_len])
                return(0);
            z++;
        }
        base_len++;
    }
    return(base_len);
}

int ft_signe(char *str)
{
    int i_str = 0;
    int neg = 0;

    while ((str[i_str] >= 9 && str[i_str] <= 13) || (str[i_str] == 32))
    {
        i_str++;
    }
    while ((str[i_str] == '+' || str[i_str] == '-'))
    {
        if (str[i_str] == '-')
            neg++;
        i_str++;
    }
    if (neg % 2)
        return(-1);
    return(1);
    
}

int ft_atoi_base(char *str, char *base)
{
    if (ft_check_base_len(base))
    {
        
    }
    return(0);
}