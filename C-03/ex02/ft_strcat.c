#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    i = 0;
    j = 0;

    while (dest[i])
    {
        i++;
    }
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void)
{
    char dest[50] = "Je suis la destination";
    char src[50] = "je suis la source";
    printf("%s \n", ft_strcat(dest, src));
	printf("%s \n", strcat(dest, src));
    return(0);
}