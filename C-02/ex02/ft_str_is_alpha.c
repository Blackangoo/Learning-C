#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    char str[] = "HelloWorld";
    int ret = ft_str_is_alpha(str);
    printf("%d \n", ret);


}