#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a give node.
 * @node: the node to find its uncle.
 * Return: the uncle of the node or NULL if not found.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent->parent)
		return ((node->parent == node->parent->parent->right)
				? node->parent->parent->left : node->parent->parent->right);
	return (NULL);
}
