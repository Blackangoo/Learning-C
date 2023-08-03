#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ls;

	ls = 0;
	i = 0;
	while (*(src + ls) != '\0')
		ls++;
	if (size < 1)
		return (ls);
	while (i < size - 1 && src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
int main(void)
{
    char src[] = "Je suis la source";
    char dest[100];
    unsigned int size = 20;
}*/