#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param tree 
 * @return size_t 
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);
	return (leaf);
}