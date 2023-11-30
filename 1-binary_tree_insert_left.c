#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;

	if (!parent)
		return (NULL);
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->n = value;
	newNode->left = newNode->right = NULL;
	newNode->parent = parent;
	if (parent->left)
	{
		temp = parent->left;
		parent->left = newNode;
		newNode->left = temp;
		temp->parent = newNode;
	}
	else
		parent->left = newNode;
	return (newNode);
}
