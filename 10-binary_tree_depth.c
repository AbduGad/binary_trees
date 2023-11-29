#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param tree 
 * @return size_t 
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
	/*depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);*/
}