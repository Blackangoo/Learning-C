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