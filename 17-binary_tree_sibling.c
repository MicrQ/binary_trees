#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that returns the sibling of the given node
 * @node: a node to find its sibling.
 * Return: the sibling of the node or NULL if not found.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		return ((node == node->parent->right)
				? node->parent->left : node->parent->right);
	}
	return (NULL);
}
