#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that traverses a tree using
 *				post-order traversal.
 * @tree: the root of the tree.
 * @func: a function pointer to do a specific task on the node data.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
