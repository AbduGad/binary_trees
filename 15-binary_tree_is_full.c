#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param tree 
 * @return int 
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (!tree)
		return (0);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	left = tree->left ? binary_tree_is_full(tree->left) : 1;
	right = tree->right ? binary_tree_is_full(tree->right) : 1;
	if (!left || !right)
		return (0);
	return (1);
}