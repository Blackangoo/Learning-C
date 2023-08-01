#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    i = 0;
    if (min < max)
    {
        *range = malloc((max - min) * sizeof(int));
        if (! *range)
            return(-1);
        while (min + i < max)
        {
            (*range)[i] = min + i;
            i++;
        }
        return(max - min);
    }
    *range = 0;
    return(0);
}

int	main(void)
{	
	int	min;
	int max;
	int	*res;
    int i;

    res = 0;
	min = -2;
	max = 2;
    printf("%d \n", ft_ultimate_range(&res,min,max));
}