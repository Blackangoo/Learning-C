#include <stdio.h>

char* ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int	main()
{
	char chaine[] = "Hello world";
	char chaine2[100];
	printf("%s\n", ft_strcpy(chaine2, chaine));
}