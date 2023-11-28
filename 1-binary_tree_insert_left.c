#include "binary_trees.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 * @param parent 
 * @param value 
 * @return binary_tree_t* 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;
	
	if(!parent)
		return(NULL);
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if(!newNode)
		return(NULL);
	newNode->n = value;
	newNode->left = newNode->right = NULL;
	newNode->parent = parent;
	if(parent->left)
	{
		temp = parent->left;
		parent->left = newNode;

		newNode->left = temp;
	}
	else
		parent->left = newNode;
	return(newNode);
}