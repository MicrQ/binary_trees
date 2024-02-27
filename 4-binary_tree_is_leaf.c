#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if the node is leaf node.
 *
 * @node: the node to be checked.
 * Return: 1 if it is leaf node, 0 if not or if node is NULL
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
