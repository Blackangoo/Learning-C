#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i])
    {
        i++;
    }
    while (src[j] && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
    
}

int main(void)
{
    char src[50] = "This is source";
    char dest[50] = "This is destination";
    printf("%s \n", ft_strncat(dest,src,3));
    printf("%s\n", strncat(dest, src, 3));
    return(0);
}