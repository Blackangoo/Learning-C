#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *curr;
    t_list *to_free;

    curr = *begin_list;
    while (curr)
    {
        if ((*cmp)(curr->data, data_ref) == 0)
        {
            (*free_fct)(curr->data);
            to_free = curr;
            curr = curr->next;
            free(to_free);
        }
    }
}