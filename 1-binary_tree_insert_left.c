#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that creates a left-child
 *				for another node.
 *
 * @parent: the parent of the newly created left child.
 * @value: the data for the newly created node.
 *
 * Return: the address of the new node
 *	   or NULL on failure or if the parent is NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node || !parent)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;
	return (node);
}
