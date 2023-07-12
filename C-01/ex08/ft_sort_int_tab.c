#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        i++;
    }
    
}

int main(void)
{
    int tab[] = {1,45,63,2,68,4,5,6,3};
    int size = 9;
    ft_sort_int_tab(tab, size);
    int x = 0;
    while (x < size)
    {
	   	printf("%d, ", tab[x]);
		x++;
    }
}