#include "binary_trees.h"


/**
 * binary_tree_inorder - a function that taverses a tree in inorder traverse.
 * @tree: the root of the tree.
 * @func: a function to perform a specific task on each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
