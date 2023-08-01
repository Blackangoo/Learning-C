#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    char *copy;
    int i_src;
    int i_copy;

    i_src = 0;
    i_copy = 0;
    while (src[i_src])
        i_src++;
    copy = (char *) malloc((i_src + 1) * sizeof(char));
    if (!copy)
        return("NULL");
    while (src[i_copy])
    {
        copy[i_copy] = src[i_copy];
        i_copy++;
    }
    copy[i_copy] = '\0';
    return(copy);
}

#include <string.h>
int	main()
{
	char chaine[] = "Hello World !"; 
	printf("%s \n", strdup(chaine));
	printf("%s \n", ft_strdup(chaine));
}