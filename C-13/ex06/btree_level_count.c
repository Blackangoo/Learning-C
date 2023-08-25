#include "ft_btree.h"
#include <stdlib.h>

int max(int nb1, int nb2)
{
    return(nb1 > nb2 ? nb1 : nb2);
}

int btree_level_count(t_btree *root)
{
    t_btree *current;

    if (root != NULL)
    {
        current = root;
        return (1 + max(btree_level_count(current->left), btree_level_count(current->right)));
    }
    else
        return(0);
}