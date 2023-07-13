#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] < 'a' || str[i] > 'z')
        {
            return 0;
        }
        
        i++;
    }
    return 1;
    
}

int main(void)
{
    char str[] = "helloworld";
    int ret = ft_str_is_lowercase(str);
    printf("%d \n", ret);
}