#include "binary_trees.h"
#include <stdio.h>
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
	l = binary_tree_height(tree->left);
	/*printf("%i\n", l);*/
	r = binary_tree_height(tree->right);
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
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left > right ? left : right);
}