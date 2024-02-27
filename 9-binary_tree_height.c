#include "binary_trees.h"

size_t max(size_t arg1, size_t arg2);
/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: a pointer to the root of the tree.
 * Return: the height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)) + 1);
}

/**
 * max - a function that returns the maximum of the two arguments.
 *
 * @arg1: value 1
 * @arg2: value 2
 *
 * Return: the maximum.
 */

size_t max(size_t arg1, size_t arg2)
{
	if (arg1 > arg2)
		return (arg1);
	return (arg2);
}
