#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param node 
 * @return int 
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if(!node)
		return(0);
	if(node->left || node->right)
		return(0);
	return(1);
}