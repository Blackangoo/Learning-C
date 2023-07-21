#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    if (n == 0)
    {
        return(0);
    }
    int i;
    i = 0;
    while (((s1[i] || s2[i]) && (s1[i] == s2[i])) && i < n)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main(void)
{
    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "ABCDEFGHIJKLMNOPQRTSUVWXYZ";
    printf("%d\n", ft_strncmp(s1, s2, 13));
	printf("%d\n", strncmp(s1, s2, 13));
    return 0;
}