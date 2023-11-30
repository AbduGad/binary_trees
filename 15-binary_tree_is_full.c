#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 on success 0 therwise
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
