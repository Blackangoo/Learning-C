#include "ft_btree.h"
#include <stdlib.h>

int level_to_apply;

level_to_apply = 0;

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

void btree_apply_to_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem), int level, int is_first_element)
{
    if (level == level_to_apply)
    {
        (*applyf)(root->item, level, is_first_element);
        return;
    }
    if (root->left)
        btree_apply_to_level(root->left, applyf, level + 1, is_first_element);
    if (root->right)
        btree_apply_to_level(root->right, applyf, level + 1, root->left ? 0 : is_first_element);
}

void btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
    int depth;

    depth = btree_level_count(root);
    while (level_to_apply < depth)
    {
        btree_apply_to_level(root, applyf, 0, 1);
        level_to_apply++;
    }
}