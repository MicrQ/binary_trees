#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that creates a right child for
 *				another node.
 * @parent: the parent of the newly created node.
 * @value: the data for the new node.
 *
 * Return: the address of the new node or NULL if the parent
 *		or the new node is NULL.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
