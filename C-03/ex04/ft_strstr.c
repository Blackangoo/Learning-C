#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i_str;
    int i_to_find;

    i_str = 0;
    while (str[i_str])
    {
        i_to_find = 0;
        if (str[i_str] == to_find[i_to_find])
        {
            while (str[i_str + i_to_find] == to_find[i_to_find])
            {
                i_to_find++;
                if (to_find[i_to_find] == '\0')
                {
                    return(&str[i_str]);
                }
            }
        }
        i_str++;
    }
    return(0);
}

int main(void)
{
    char str[] = "bonjour je suis un mot admin test";
    char to_find[] = "jes";

    char *ptr;

    ptr = ft_strstr(str,to_find);

    printf("%s\n", ptr);
	printf("%s\n", ft_strstr(str, to_find));

    return(0);
}