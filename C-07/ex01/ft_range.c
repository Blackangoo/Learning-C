#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *tab;
    int i;

    i = 0;
    if (min < max)
    {
        tab = malloc((max - min) * sizeof(int));
        if (!tab)
            return(0);
        while (min + i < max)
        {
            tab[i] = min + i;
            i++;
        }
        return(tab);
    }
    return(0);
}

int	main(void)
{	
	int	min;
	int max;
	int	*res;
    int i;

	min = -2;
	max = 2;
	res = ft_range(min, max);
    i = 0;
    
    while (i < (max - min))
    {
        printf("%d \n", res[i]);
        i++;
    }
}