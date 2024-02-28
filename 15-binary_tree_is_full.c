#include "binary_trees.h"

size_t one_node(const binary_tree_t *tree);

/**
 * binary_tree_is_full - a function that checks if the tree is full.
 * @tree: the root of the tree.
 * Return: 1 if the tree is full, 0 if the tree is NULL or not full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (one_node(tree) == 0);
}


/**
 * one_node - a function that counts a tree node with exactly 1 child
 * @tree: the root of the tree.
 * Return: number of nodes with exactly one child.
 */

size_t one_node(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (one_node(tree->left)
			+ one_node(tree->right)
			+ ((tree->left && !tree->right) || (!tree->left && tree->right)));
}
