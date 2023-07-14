#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

char *ft_strcapitalize(char *str)
{
    str = ft_strlowcase(str);
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    return str;
}

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s \n", ft_strcapitalize(str));
}