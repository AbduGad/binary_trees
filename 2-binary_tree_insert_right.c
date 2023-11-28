#include "binary_trees.h"
/**
 * @brief 
 * 
 * @param parent 
 * @param value 
 * @return binary_tree_t* 
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;
	
	if(!parent)
		return(NULL);
	newNode = binary_tree_node(parent, value);
	if(parent->right)
	{
		temp = parent->right;
		parent->right = newNode;
		newNode->right = temp;
		temp->parent = newNode;
	}
	else
		parent->right = newNode;
	return(newNode);
}