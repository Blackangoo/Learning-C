#include <stdio.h>

int		ft_tab_length(char **tab)
{
	int	length;

	length = 0;
	while (*tab++)
		length++;
	return (length);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ((s1[i] || s2[i]) && (s1[i]==s2[i]))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
    int i;
    int j;
    char *temp;
    int size;

	size = ft_tab_length(tab);

    i = 0;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size - i - 1)
        {
            if (cmp(tab[i], tab[j]) > 0)
            {
                temp = tab[i];
                tab[i] = tab [j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main() {
    // Tableau de chaînes de caractères non triées (terminé par un pointeur nul)
    char *unsorted[] = {"banana", "apple", "cherry", "date", "grape", NULL};
    
    // Affichage du tableau non trié
    printf("Tableau non trié:\n");
    for (int i = 0; unsorted[i] != NULL; i++) {
        printf("%s\n", unsorted[i]);
    }

    // Appel de la fonction de tri
    ft_advanced_sort_string_tab(unsorted,*ft_strcmp);

    // Affichage du tableau trié
    printf("\nTableau trié:\n");
    for (int i = 0; unsorted[i] != NULL; i++) {
        printf("%s\n", unsorted[i]);
    }

    return 0;
}