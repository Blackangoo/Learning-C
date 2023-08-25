#include "ft_btree.h"
#include <stdlib.h>

t_btree *btree_create_node(void *item)
{
    t_btree *btree;

    btree = NULL;
    btree = malloc(sizeof(t_btree));
    if (btree)
    {
        btree->item = item;
        btree->left = 0;
        btree->right = 0;
    }
    return(btree);
}

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
    t_btree *current;
    int comp;

    if (*root == NULL)
    {
        *root = btree_create_node(item);
    }
    current = *root;
    comp = (*cmpf)(item, current->item);
    if (comp < 0)
    {
        if (current->left)
            btree_insert_data(&current->left, item, cmpf);
        else
            current->left = btree_create_node(item);
    }
    else
    {
        if (current->right)
            btree_insert_data(&current->right, item, cmpf);
        else
            current->right = btree_create_node(item);
    }
}