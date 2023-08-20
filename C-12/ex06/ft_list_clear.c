#include "ft_list.h"
#include <stdlib.h>

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list *first_element;
    t_list *list_to_free;

    first_element = begin_list;
    while (first_element)
    {
        free_fct(first_element->data);
        list_to_free = first_element;
        first_element = first_element->next;
        free(list_to_free);
    }
}