#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if the node is a root.
 *
 * @node: the node to be checked.
 * Return: 1 if it is, 0 if not or if node is NULL.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
