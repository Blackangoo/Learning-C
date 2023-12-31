#include "ft_btree.h"
#include <stdlib.h>

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
    if (!root || !data_ref)
        return(0);
    else if (root->left)
        return(btree_search_item(root->left, data_ref, cmpf));
    else if ((*cmpf)(data_ref, root->item) == 0)
        return(root);
    else if (root->right)
        return(btree_search_item(root->right, data_ref, cmpf));
    return(0);
}