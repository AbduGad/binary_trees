#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new nod
 * Return:  pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (parent->right)
	{
		temp = parent->right;
		parent->right = newNode;
		newNode->right = temp;
		temp->parent = newNode;
	}
	else
		parent->right = newNode;
	return (newNode);
}
