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

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    t_list *current_in_list1;
    t_list *current_in_list2;
    t_list *temp;

    current_in_list2 = begin_list2;
    while (current_in_list2)
    {
        current_in_list1 = *begin_list1;
        while (current_in_list1->next && (*cmp)(current_in_list1->next->data, current_in_list2->data) < 0)
        {
            current_in_list1 = current_in_list1->next;
        }
        temp = current_in_list2;
        current_in_list2 = current_in_list2->next;
        temp->next = current_in_list1->next;
        current_in_list1->next = temp;
        
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
    t_list *list1 = NULL;
    t_list *item1 = malloc(sizeof(t_list));
    item1->data = "banana";
    t_list *item2 = malloc(sizeof(t_list));
    item2->data = "apple";
    t_list *item3 = malloc(sizeof(t_list));
    item3->data = "donkey";

    item1->next = item2;
    item2->next = item3;
    item3->next = NULL;

    list1 = item1;

    // Créer une autre liste avec quelques éléments non triés
    t_list *list2 = NULL;
    t_list *item4 = malloc(sizeof(t_list));
    item4->data = "chocolate";
    t_list *item5 = malloc(sizeof(t_list));
    item5->data = "maze";
    t_list *item6 = malloc(sizeof(t_list));
    item6->data = "plane";

    item4->next = item5;
    item5->next = item6;
    item6->next = NULL;

    list2 = item4;

    // Appeler la fonction de tri avec ft_strcmp comme fonction de comparaison
    ft_list_sort(&list1, ft_strcmp);

    printf("Liste 1 triée :\n");
        print_list(list1);

    printf("Liste 2 triée :\n");
        print_list(list2);

    ft_sorted_list_merge(&list1, list2, ft_strcmp);

    printf("Liste mergée :\n");
        print_list(list1);
    // Libérer la mémoire des éléments de la liste
    while (list1) {
        t_list *temp = list1;
        list1 = list1->next;
        free(temp);
    }

    return 0;
}