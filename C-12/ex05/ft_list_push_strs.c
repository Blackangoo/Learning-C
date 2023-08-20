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

t_list *ft_list_push_strs(int size, char **strs)
{
    t_list *list1;
    t_list *list2;
    int i;

    if (size > 0)
    {
        list1 = ft_create_elem(strs[0]);
        i = 1;
        while (i < size)
        {
            list2 = ft_create_elem(strs[i]);
            list2->next = list1;
            list1 = list2;
            i++;
        }
        return(list1);
    }
    else
        return(NULL);
}