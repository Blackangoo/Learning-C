#include <stdlib.h>

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

int ft_joined_length(int size, char **strs, char *sep)
{
    int i;
    int joined_size;

    joined_size = 0;
    i = 0;
    while (i < size)
    {
        joined_size = joined_size + ft_strlen(strs[i]);
        i++;
    }
    joined_size = joined_size + ft_strlen(sep) * (size - 1);
    return(joined_size);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *joined;
    int i_joined;
    int i_strs;
    int i;

    i_joined = 0;
    i_strs = 0;
    joined = malloc(sizeof(char) * ft_joined_length(size, strs, sep));
    if (size != 0)
    {
        while (i_strs < size)
        {
            i = 0;
            while (strs[i_strs][i])
            {
                joined[i_joined] = strs[i_strs][i];
                i_joined++;
                i++;
            }
            i = 0;
            while ((i_strs < size - 1) && (sep[i]))
            {
                joined[i_joined] = sep[i];
                i_joined++;
                i++;
            }
            i_strs++;
        }
        joined[i_joined] = '\0';
        return(joined);
    }
    return(malloc(0));
}