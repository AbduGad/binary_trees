#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param tree 
 * @return int 
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	/*printf("%i\n", l);*/
	if (tree->right)
		r = 1 + binary_tree_height(tree->right);
	/*printf("%i\n", r);*/
	return (l - r);
}
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

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	return (left > right ? left : right);
}