#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that returns the number of leaves in a tree.
 * @tree: the root of the tree.
 *
 * Return: the number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right)
			+ (!tree->left && !tree->right));
}
