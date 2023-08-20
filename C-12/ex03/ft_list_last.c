#include "ft_list.h"
#include <stdlib.h>

t_list *ft_list_last(t_list *begin_list)
{
    t_list *list;

    list = begin_list;
    if (list)
    {
        while (list->next)
            list = list->next;
        return(list);
    }
    return(NULL);
}
    