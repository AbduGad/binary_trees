#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param tree 
 * @return int 
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((int)(binary_tree_height(tree->left) - binary_tree_height(tree->right)));
}