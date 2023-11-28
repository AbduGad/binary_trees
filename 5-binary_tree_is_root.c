#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param node 
 * @return int 
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if(!node)
		return(0);
	if(node->parent)
		return(0);
	return(1);
}