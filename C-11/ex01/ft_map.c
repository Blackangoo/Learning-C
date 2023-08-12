#include <stdlib.h>
#include <stdio.h>

int square(int x) {
    return x * x;
}

int *ft_map(int *tab, int length, int(*f)(int))
{
    int i;
    int *return_tab;

    i = 0;
    return_tab = malloc(sizeof(int) * length);
    if (return_tab == NULL)
        return NULL;
    while (i < length)
    {
        return_tab[i] = f(tab[i]);
        i++;
    }
    return(return_tab);
}

int main(void)
{
    int tab[] = {1,2,3,4,5};
    int length = 5;

    int* test = ft_map(tab,length,&square);

    int i = 0;
    while (test[i])
    {
        printf("%d ", test[i]);
        i++;
    }
}