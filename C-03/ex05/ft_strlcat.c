#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = 0;
    if (size - 1 <= dest_len)
        return(src_len + size);
    while (dest_len + i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return(dest_len + src_len);
}
/*
int main(void)
{
    return(0);
}*/