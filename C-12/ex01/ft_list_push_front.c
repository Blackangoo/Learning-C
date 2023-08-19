#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
    t_list *list;

    list = NULL;
    list = malloc(sizeof(t_list));
    if (list)
    {
        list->data = data;
        list->next = NULL;
    }
    return(list);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *list;

    if (*begin_list) //if there is already something in the list
    {
        list = ft_create_elem(data); //create a t_list
        list->next = *begin_list; //the next element is the begin list
        *begin_list = list; //begin list becomes the new t_list with the data inserted at the front
    }
    else
    {
        *begin_list = ft_create_elem(data);
    }
}