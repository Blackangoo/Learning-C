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
        if ((str[i] >= 'a' && str[i] <= 'z') && ((str[i - 1] >= 0 && str[i - 1] < 48) || (str[i - 1] >= 58 && str[i -1] < 65) || (str[i - 1] >= 91 && str[i -1] < 97) || (str[i - 1] > 122)))
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}
/*
int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s \n", ft_strcapitalize(str));
}*/