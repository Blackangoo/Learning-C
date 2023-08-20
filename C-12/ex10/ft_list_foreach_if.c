#include "ft_list.h"
#include <stdlib.h>

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
    t_list *list;

    while (list)
    {
        if ((*cmp)(list->data, data_ref) == 0)
        {
            (*f)(list->data);
        }
        list = list->next;
    }
}