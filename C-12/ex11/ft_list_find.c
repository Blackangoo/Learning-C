#include "ft_list.h"
#include <stdlib.h>

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list *list;
    while (list)
    {   
        if ((*cmp)(list->data, data_ref) == 0)
            return(list);
        list = list->next;
    }
    return(NULL);
}