#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;
    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = temp;
        i++;
    }
    
}

int main(void)
{
    int tab[] = {1,2,3,4,5};
    int size = 5;
    ft_rev_int_tab(tab, size);
    int x = 0;
    while (x < size)
    {
	   	printf("%d", tab[x]);
		x++;
    }
}