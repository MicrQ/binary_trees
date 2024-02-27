#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a tree.
 * @tree: a pointer to a tree node to measure the depth.
 * Return: the depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
