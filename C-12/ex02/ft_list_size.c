#include "ft_list.h"
#include <stdlib.h>

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