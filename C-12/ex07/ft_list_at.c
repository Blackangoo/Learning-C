#include "ft_list.h"
#include <stdlib.h>

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