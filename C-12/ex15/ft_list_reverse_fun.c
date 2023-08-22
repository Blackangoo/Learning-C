#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ft_list_size(t_list *begin_list)
{
    t_list *list;
    int size;

    size = 0;
    list = begin_list;
    if (list)
    {
        while (list)
        {
            size++;
            list = list->next;
        }
    }
    return(size);
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list *list;
    unsigned int i;

    i = 0;
    list = begin_list;
    while (list && i != nbr)
    {
        i++;
        list = list->next;
    }
    if (i != nbr)
        return(NULL);
    else
        return(list);
}

void ft_list_swap(t_list *list1, t_list *list2)
{
	t_list *temp;

	temp = list1->data;
	list1->data = list2->data;
	list2->data = temp;
}

void ft_list_reverse_fun(t_list *begin_list)
{
    int size;
    int i;

    size = ft_list_size(begin_list);
    i  = 0;
    while (i < size / 2)
    {
        ft_list_swap(ft_list_at(begin_list, i), ft_list_at(begin_list, size - i - 1));
        i++;
    }
}

void print_list(t_list *list) {
    t_list *current;

    current = list;
    while (current) {
        printf("%s\n", (char *)(current->data));  // Cast data to char* assuming it's a string
        current = current->next;
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

    ft_list_reverse_fun(list);

    printf("Liste inversée :\n");
    print_list(list);
    while (list) {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }

    return 0;
}