#include "ft_list.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
    return strcmp(s1, s2);
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    int found;
    t_list *temp;
    t_list *current;

    found = 1;
    while (found)
    {
        found = 0;
        current = *begin_list;
        while (current->next)
        {
            if ((*cmp)(current->data, current->next->data) > 0)
            {
                temp = current->next;
                current->next = temp->next;
                temp->next = current;
                *begin_list = temp;
                current = temp;
                found = 1;
            }
            else
                current = current->next;
        }
    }
}

void print_list(t_list *list) {
    while (list) {
        printf("%s\n", (char *)(list->data));  // Cast data to char* assuming it's a string
        list = list->next;
    }
}

int main() {
    // Créer une liste avec quelques éléments non triés
    t_list *list = NULL;
    t_list *item1 = malloc(sizeof(t_list));
    item1->data = "banana";
    t_list *item2 = malloc(sizeof(t_list));
    item2->data = "apple";
    t_list *item3 = malloc(sizeof(t_list));
    item3->data = "cherry";

    item1->next = item2;
    item2->next = item3;
    item3->next = NULL;

    list = item1;

    // Appeler la fonction de tri avec ft_strcmp comme fonction de comparaison
    ft_list_sort(&list, ft_strcmp);

    printf("Liste triée :\n");
        print_list(list);

    // Libérer la mémoire des éléments de la liste
    while (list) {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }

    return 0;
}