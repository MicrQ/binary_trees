#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts a tree node with at least 1 child
 * @tree: the root of the tree.
 * Return: number of nodes with at least one child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right)
			+ (tree->left || tree->right));
}
