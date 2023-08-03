#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i;
    int found;

    found = 1;
    while (found)
    {
        found = 0;
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                i = 0;
                found = 1;
            }
            i++;
        }
    }
}
/*
int main(void)
{
    int tab[] = {9,8,7,6,5,4,3,2,1};
    int size = 9;
    ft_sort_int_tab(tab, size);
    int x = 0;
    while (x < size)
    {
	   	printf("%d, ", tab[x]);
		x++;
    }
}*/