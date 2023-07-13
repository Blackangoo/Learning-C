#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n) /* put an = ?? */
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main(void)
{
    char test[] = "Test";
    char dest[100];
    unsigned int size = 3;
    printf("%s \n", ft_strncpy(dest,test,size));
}