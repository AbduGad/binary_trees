#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param tree 
 * @return size_t 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	left = right = 0;
	if (!tree)
		return (0);
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left > right ? left : right);
}