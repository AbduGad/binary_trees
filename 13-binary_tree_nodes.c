#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param tree 
 * @return size_t 
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		nodes += 1;
	nodes += binary_tree_leaves(tree->left);
	nodes += binary_tree_leaves(tree->right);
	return (nodes);
}